#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, b;

	i = 0;
	while (i < n)
	{
		b = a[i];
		a[i] = a[n - 1];
		a[n - 1] = b;
		i++;
		n--;
	}
}
