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
	int i, j, tmp, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			tmp = atoi(argv[i]);
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] > '9' || argv[i][j] < '0')
				{
					puts("Error");
					return (1);
				}
			}
			if (tmp > 1)
			{
				sum += tmp;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
