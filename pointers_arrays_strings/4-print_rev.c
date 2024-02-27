#include "main.h"

/**
 * print_rev - print
 *
 * @s : string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int nombre = 0;
	int retour;

	while (s[nombre] != '\0')
	{
		nombre++;
	}
	for (retour = nombre - 1; retour >= 0; retour--)
	{
		_putchar(s[retour]);
	}
	_putchar(10);

}
