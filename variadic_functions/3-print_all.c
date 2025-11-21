#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/* Déclaration du type de la structure pour le mapping */
struct type_arg {
    char c;
    void (*type_f)(va_list);
};

/* Déclarations des fonctions d'impression spécialisées */
void print_int(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/* Tableau de mapping statique (dans la portée globale pour éviter le segfault sur la pile) */
static struct type_arg types[] = {
    { 'i', print_int },
    { 'c', print_char },
    { 'f', print_float },
    { 's', print_string },
    { 0, NULL } /* Marqueur de fin */
};

/* --- Fonctions d'impression spécialisées --- */

void print_int(va_list arg)
{
    printf("%i", va_arg(arg, int));
}

void print_char(va_list arg)
{
    /* char est promu à int */
    printf("%c", va_arg(arg, int));
}

void print_float(va_list arg)
{
    /* float est promu à double */
    printf("%f", va_arg(arg, double));
}

void print_string(va_list arg)
{
    char *s = va_arg(arg, char *);
    
    /* Le seul 'if' autorisé ici pour le cas NULL (contrainte) */
    if (s == NULL)
    {
        printf("(nil)");
        return;
    }
    printf("%s", s);
}

/* --- Fonction principale print_all --- */

void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);
    
    int i = 0;
    int j;
    
    /* Boucle 1/2 : Parcourir la chaîne de format */
    while (format && format[i] != '\0')
    {
        j = 0;
        
        /* Boucle 2/2 : Parcourir le tableau de types pour la correspondance */
        while (types[j].c != 0)
        {
            /* IF 1/2 : Trouver le spécificateur */
            if (format[i] == types[j].c)
            {
                types[j].type_f(args);
                
                /* IF 2/2 : Vérifier si ce n'est pas le dernier élément pour ajouter la virgule */
                if (format[i + 1] != '\0')
                {
                    printf(", ");
                }
                
                break; /* Sortir immédiatement de la boucle 'j' */
            }
            j++;
        }
        
        i++;
    }
    
    printf("\n");
    va_end(args);
}
