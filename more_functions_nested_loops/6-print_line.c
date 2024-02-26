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
	int x = 0;

	if (n > 0)
	{
		while (x < n)
		{
			_putchar(95);
			x++;
		}
	_putchar(10);

	}
	else
	_putchar(10);


}
