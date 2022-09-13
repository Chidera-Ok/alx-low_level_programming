#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * 
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is a positive\n", n);
	}
	else
	{
		if (n == 0)
		{
			printf("%i is zero\n", n);
		}
		else
		{
			printf("%i is a negative\n", n);
		}
	}
	return (0);
}
