#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main- entry point of the program
 * Description: The main function in the program
 * Return: zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/*int last_digit = n % 10;*/

	printf("Last digit of %d is %d ", n, n % 10);

	if ((n % 10) > 5)
	{
		printf("and is greater than 5\n");
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("and is 0\n");
	}

	return (0);
}
