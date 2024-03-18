#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_iterator - function that executes a function given as a
* parameter on each element of an array
*
* @array: integrer array
* @size: size of a array - size_t est un type comme "int"
* @action: function to execute on each element of the array
*
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0 ; i < size; i++)
	{
		action(array[i]);
	}
}
