#include "main.h"
#include <stdio.h>
/**
 * rev_string - check the code
 *
 * @s : string
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int nombre = 0;
	int retour;

	while (s[nombre] != '\0')
	{
		nombre++;
	}
	for (retour = nombre - 1; retour >= 0; retour--)
	{
		putchar(s[retour]);
	}
	putchar(10);
}
