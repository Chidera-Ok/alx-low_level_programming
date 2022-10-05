#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, tmp, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			tmp = atoi(argv[i]);
			if (tmp)
			{
				sum += tmp;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
