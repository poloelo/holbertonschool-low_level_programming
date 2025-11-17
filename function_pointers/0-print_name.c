/**
 * print_name - Fonction qui print un string en
 * fonction d'une fonction/méthode demandé.
 *
 * @name: le nom a print
 * @f: la methode qu'on veut appliquer au string
 *
 */
#include "function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
f(name);
}
