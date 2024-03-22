#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: separator
 * @n: integers
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list liste;

	unsigned int i;

	va_start(liste, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(liste, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(liste);
}
