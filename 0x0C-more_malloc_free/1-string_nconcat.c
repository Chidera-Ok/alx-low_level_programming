#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, k, l, m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
	}
	for (j = 0; s2[j]; j++)
	{
	}
	if (n < j)
		j = n;
	m = j + i;
	arr = malloc(sizeof(char) * (m + 1));

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		arr[k] = s1[k];

	for (l = 0; l < j; l++)
		arr[k + l] = s2[l];

	arr[m] = '\0';
	return (arr);
}
