#include "main.h"

/**
 * print_line - print line
 *
 * @n : variable
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	while (n > 0)
		_putchar('_' + n);
	_putchar(10);

	return (n);
}
