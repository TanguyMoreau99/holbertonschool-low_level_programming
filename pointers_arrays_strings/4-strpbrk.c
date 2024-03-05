#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function
 *
 * @s : pointer
 * @accept : pointer
 *
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int index = 0;

	while (*s != '\0')
	{
		for (index = 0; accept[index] != '\0'; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}
	s++;
	}

	return (NULL);
}
