#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of arguments passed to the function
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list liste;
	int i = 0;
	char *string;

	va_start(liste, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(liste, int));
				break;
			case 'f':
				printf("%f", va_arg(liste, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(liste, int));
				break;
			case 's':
				string = va_arg(liste, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(liste);
}

