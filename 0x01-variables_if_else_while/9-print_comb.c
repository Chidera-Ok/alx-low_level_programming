#include <stdio.h>

/**
 * main - main block
 *
 * Return: 0
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '9')
		{
			putchar(num);
			putchar(',');
		}
		else
		{
			putchar(num);
			putchar('\n');
		}
	}
	return (0);
}
