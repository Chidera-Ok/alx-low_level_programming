#include "main.h"

/**
 * _memset- function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; n++)
	{
		s[i] = b;
	}
	return (s);
}
