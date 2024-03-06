#include "main.h"
#include <stdio.h>

/**
 * factorial - function
 *
 * @n : int
 *
 * Return: -1 if error; 1 if it's 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
