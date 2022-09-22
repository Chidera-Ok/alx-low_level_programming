#include "main.h"

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 * @s: a string
 *
 * Return: uppercase
 */

char *string_toupper(char *s)
{
	for ( ; *s; s++)
		if (('a' <= *s) && (*s <= 'z'))
			*s = 'A' + (*s - 'a');
	return (s);
}
