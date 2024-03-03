#include "main.h"
#include <stdio.h>

/**
 *string_toupper - put maj
 *
 * @s : pointer
 *
 * Return: /
 */

char *string_toupper(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = s[index] - 32;
		}
	}
	return (s);
}
