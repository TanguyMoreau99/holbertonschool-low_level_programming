#include "main.h"

/**
 * _puts - print
 *
 * @str : string
 *
 * Return: void
 */

void _puts(char *str)
{

	int x;

	for (x = 0; str[x] != 0; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
