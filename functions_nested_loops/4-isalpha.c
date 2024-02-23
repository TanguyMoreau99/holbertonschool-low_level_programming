#include "main.h"

/**
 * _islower - x
 * @c : x
 * Return: 0 or 1
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
