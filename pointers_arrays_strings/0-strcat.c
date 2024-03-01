#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest : destination
 *
 * @src : source
 *
 * Return: to dest
 */

char *_strcat(char *dest, char *src)
{
	int index1 = 0;
	int index2 = 0;

	while (dest[index1] != '\0')
	{
		index1++;
	}

	while (src[index2] != '\0')
	{
		index2++;
		index1++;
		dest[index1] = src[index2];
	}

	dest = '\0';
	return (dest);
}
