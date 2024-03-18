#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* int_index - function that searches for an integer
* @array: array of integrers
* @size: number of elements in the array
* @cmp: pointer to the function to be used to compare values
*
* Return: Index of match or -1 (size <= 0 || no match)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
