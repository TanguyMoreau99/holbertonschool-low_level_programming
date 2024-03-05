#include "main.h"
#include <stdio.h>

/**
 * _strspn - function
 *
 * @s : pointer char
 * @accept : pointer
 *
 * Return: /
 */

unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int x = 0;

	while (*s != '\0')
	{
		for (index = 0; accept[index]; index++)
		{
			if (accept[index] == *s)
			{
				x++;
				break;
			}


			else if ((accept[index + 1]) == '\0')
				return (x);
		}
	s++;
	}

	return (x);
}
