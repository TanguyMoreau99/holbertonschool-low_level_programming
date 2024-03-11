#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate the string
 * @str : string
 *
 * Return: /
 */

char *_strdup(char *str)
{

	char *sortie;
	unsigned int index1;
	unsigned int index2;

	if (str == 0)
	{
		return (NULL);
	}
	for (index1 = 0; str[index1] != '\0'; index1++)

	sortie = (char *)malloc(sizeof(char) * (index1 + 1));

	if (sortie == NULL)
		return (NULL);
	for (index2 = 0; index2 <= index1; index2++)
		sortie[index2] = str[index1];

	return (sortie);
}
