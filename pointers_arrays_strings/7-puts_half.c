#include "main.h"

/**
 * puts_half - puts the half of a string
 *
 * @str : char
 *
 * Return: void
 */

void puts_half(char *str)
{
	int x = 0;
	int y;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 0)
	{

		for (y = (x / 2); y < x; y++)
		{
			_putchar(str[y]);
		}
	}

	else
	{
		for (y = ((x + 1) / 2); y < x; y++)
		{
			_putchar(str[y]);
		}
	}
	_putchar(10);
}
