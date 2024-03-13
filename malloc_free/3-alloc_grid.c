#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: /
 */

int **alloc_grid(int width, int height)
{
	int a, b;

	int **array;


	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			for (a = 0; a < height; a++)
			{
				free(array[a]);
			}
			free(array);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			array[a][b] = 0;
		}
	}
	return (array);
}
