#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string which is
 * a duplicate of the string str. Memory for the new string is
 * obtained with malloc, and can be freed with free.
 * @str: string
 *
 * Return: a pointer to the duplicated string or
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int i, j;
	char *str_cpy;

	if (str == NULL)
		return (NULL);

	for (i = 0; i <= *str; i++)
	{
	}

	i += 1;
	str_cpy = malloc(sizeof(char) * i);

	for (j = 0; j < i; j++)
	{
		str_cpy[j] = str[j];
	}
	str_cpy[i] = '\0';

	if (str_cpy == NULL)
		return (NULL);

	return (str_cpy);
}
