#include <stdio.h>

/**
 * main - main block
 *
 * Return: 0
 */

int main(void)
{
	char lc;

	/* lc: lower case */
	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc == 'q')
		{}
		else if (lc == 'e')
		{}
		else
		{
			putchar(lc);
		}
	}
	putchar('\n');
	return (0);
}
