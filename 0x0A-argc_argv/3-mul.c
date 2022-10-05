#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of commandline arguments
 * @argv: an array of commandline arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
}
