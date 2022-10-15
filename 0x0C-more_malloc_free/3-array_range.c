#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int len, i;

	if (min > max)
		return (NULL);

	len = max - min;
	arr = malloc(sizeof(int) * (len + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
