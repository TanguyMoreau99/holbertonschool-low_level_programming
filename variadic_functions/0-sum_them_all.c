#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums the args
 * @n: number of args
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
