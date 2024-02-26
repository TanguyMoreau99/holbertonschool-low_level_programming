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
	if (n > 0)
		_putchar(95 * n);
	if (n <= 0)
		_putchar(95);
	_putchar(10);


}
