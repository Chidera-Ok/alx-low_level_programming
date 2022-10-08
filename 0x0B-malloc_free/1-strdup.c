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
	char *s;

	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[len] = '\0';
	return (s);
}
