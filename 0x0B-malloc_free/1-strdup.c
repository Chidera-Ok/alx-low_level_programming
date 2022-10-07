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
	int i, end;
	char *array;

	if (str == NULL)
		return (NULL);

	for (end = 0; end <= *str; end++)
	{
	}

	end += 1;
	array = malloc(sizeof(char) * end);

	for (i = 0; i < end; i++)
		array[i] = str[i];

	if (array == NULL)
		return (NULL);
	return (array);
}
