#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  a function that allocates memory for an array, using malloc.
 * @nmemb: elements
 * @size: size
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;
	return (arr);
}
