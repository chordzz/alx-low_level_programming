#include <stdio.h>

/**
 * main - prints the largest prime factor of a given number
 *
 * Return: 0
 */

int main(void)
{
	long int num = 612852475143;
	long int i, j, isPrime, maxPrime;

	maxPrime = 0;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			isPrime = 1;
			for (j = 2; j <= (i / 2); j++)
			{
				if (i % j == 0)
				{
					isPrime = 0;
					break;
				}
			}
			if (i > maxPrime && isPrime == 1)
			{
				maxPrime = i;
			}
		}
	}

	printf("%li\n", maxPrime);
	return (0);
}
