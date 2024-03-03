#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the array
 *
 * @a: pointer a
 *
 * @n: the number of elements of the array
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int index1;
	int index2;
	int tempo;

	index2 = n - 1;

	for (index1 = 0; index1 < n / 2; index1++)
	{
		tempo = a[index1];
		a[index1] = a[index2];
		a[index2--] = tempo;

	}
}
