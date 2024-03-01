#include "main.h"
#include <stdio.h>

/**
 * _strncat - /
 *
 * @dest : destination
 *
 * @src : source
 *
 * @n : n
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index1 = 0;
	int index2 = 0;

	while (dest[index1] != '\0')
	{
		index1++;
	}
	while (src[index2] != '\0' && index2 < n)
	{
		dest[index1] = src[index2];
		index1++;
		index2++;
	}

	dest[index1] = '\0';

	return (dest);
}
