#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function
 * @dest: destination
 * @src: source
 * @n: unsigned int
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
