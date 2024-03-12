#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate strings
 * @s1 : string 1
 * @s2 : string 2
 *
 * Return: /
 */

char *str_concat(char *s1, char *s2)
{
	int longueur1;
	int longueur2;
	char *fin;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (longueur1 = 0; s1[longueur1] != '\0'; longueur1++)

	for (longueur2 = 0; s2[longueur2] != '\0'; longueur2++)

	fin = (char *)malloc(sizeof(char) * ((longueur1 + longueur2) + 1));

	if (fin == NULL)
	{
		return (NULL);
	}

	for (longueur1 = 0; s1[longueur1] != '\0'; longueur1++)
	{
		fin[longueur1] = s1[longueur1];

	}
	for (longueur2 = 0; s2[longueur2] != '\0'; longueur2++)
	{
		fin[longueur1] = s2[longueur2];
		longueur1++;
	}
	fin[longueur1] = '\0';
	return (fin);
}
