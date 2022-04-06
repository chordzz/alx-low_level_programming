#include "main.h"
#include <stdio.h>

/**
 * main - returns the name of the program
 * @argc: number of command line arguments
 * @argv: array that contains the program comman line arguments
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	(void) *argv[];
	printf("%d\n", argc - 1);
	return (0);
}
