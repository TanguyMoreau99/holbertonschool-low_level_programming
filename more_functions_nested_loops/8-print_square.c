#include "main.h"

/**
 * print_square - check the code
 *
 * @size : size
 *
 * Return: /
 */

void print_square(int size)
{
	int l;
	int h;

	if (size <= 0)
		_putchar(10);

	if (size > 0)
		for (l = 1; l <= size; l++)
		{
			for (h = 1; h <= size; h++)
			{
			_putchar(35);
			}
		_putchar(10);
		}

}
