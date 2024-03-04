#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: char
 * @b: char
 * @n : unsigned int
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n <= 0)
	{
		return (s);
	}
	if (n > 0)
		for (i = 0; i < n; i++)
		{
			*(s + i) = b;
		}
	return (s);
}
