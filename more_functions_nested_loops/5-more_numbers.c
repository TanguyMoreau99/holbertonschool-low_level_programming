#include "main.h"

/**
 * more_numbers - check
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int t;
	int x;

	for (t = 0; t < 10; t++)
	{
	for (x = 0; x <= 14; x++)
	{
		if (x > 9)
			_putchar('1');
		_putchar('0' + (x % 10));
	}
	_putchar('\n');
	}
}
