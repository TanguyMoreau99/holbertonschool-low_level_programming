#include "main.h"
/**
 * swap_int - swap the value of 2 int
 *
 * @a : int 1
 *
 * @b : int 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *b;
	*b = *a;
	*a = c;
}
