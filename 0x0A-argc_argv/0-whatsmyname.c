#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = argc - 1;

	printf("%s\n", argv[i]);
	return (0);
}
