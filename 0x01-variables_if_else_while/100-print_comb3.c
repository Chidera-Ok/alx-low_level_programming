#include <stdio.h>

/**
 * main - main block
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 100; num++)
	{
		if ((num / 10) < (num % 10))
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');

			if (num == 89)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
