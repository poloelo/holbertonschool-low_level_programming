#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/* --- Fonctions spécialisées --- */

void p_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

void p_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

void p_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

void p_string(va_list ap)
{
	char *s = va_arg(ap, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/* --- Structure pour le mapping --- */
typedef struct printer {
	char c;
	void (*f)(va_list);
} printer_t;

/* --- Fonction principale --- */

void print_all(const char * const format, ...)
{
	printer_t ops[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_string},
		{0, NULL}
	};

	va_list ap;
	int i = 0, j, comma = 0;

	va_start(ap, format);

	/* WHILE n°1 : parcourir format */
	while (format && format[i])
	{
		j = 0;

		/* WHILE n°2 : parcourir les types */
		while (ops[j].c)
		{
			/* IF n°1 : vérifier correspondance */
			if (format[i] == ops[j].c)
			{
				/* IF n°2 : imprimer virgule si nécessaire */
				if (comma)
					printf(", ");

				ops[j].f(ap);
				comma = 1;

				break;  /* pas d’else */
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}