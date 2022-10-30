#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 * @b: pointer to string
 *
 * Return:the converted number, or 0 if
 * there is one or more chars in the
 * string b that is not 0 or 1 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int len, temp;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		;

	for (len--, temp = 1; len >= 0; len--, temp *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
		{
			ui += temp;
		}
	}
	return (ui);
}
