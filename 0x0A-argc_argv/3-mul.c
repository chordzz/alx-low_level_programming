#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns the name of the program
 * @argc: number of command line arguments
 * @argv: array that contains the program comman line arguments
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

