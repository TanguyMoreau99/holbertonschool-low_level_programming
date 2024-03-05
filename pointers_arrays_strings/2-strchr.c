#include "main.h"
#include <stdio.h>

/**
 * _strchr - function
 *
 * @s: char
 * @c : char
 *
 * Return: /
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
