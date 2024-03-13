#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code
 * @s1 : string 1
 * @s2 : string 2
 * @n : number of bytes
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index1;
	unsigned int index2;
	char *fin;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index1 = 0; s1[index1] != '\0'; index1++)
	{
	}
	for (index2 = 0; s2[index2] != '\0'; index2++)
	{
	}
	fin = malloc(index1 + index2 + 1);

	if (fin == NULL)
		return (NULL);
	for (index1 = 0; s1[index1] != '\0'; index1++)
	{
		fin[index1] = s1[index1];
	}
	for (index2 = 0; index2 < n && s2[index2] != '\0'; index2++)
	{
		fin[index1 + index2] = s2[index2];
	}
	fin[index1 + index2] = '\0';
	return (fin);
}
