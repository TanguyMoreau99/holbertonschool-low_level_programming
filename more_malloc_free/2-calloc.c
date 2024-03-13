#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - calloc
 * @nmemb: number of elements
 * @size: the size
 *
 * Return: /
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int compteur;
	unsigned int totalsize;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	totalsize = (nmemb * size);
	ptr = malloc(totalsize);

	if (ptr == NULL)
		return (NULL);

	for (compteur = 0; compteur < totalsize; compteur++)
	{
		ptr[compteur] = 0;
	}

	return (ptr);
}
