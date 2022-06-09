#include "main.h"

/**
 * positive_or_negative - checks whether num is pos or neg
 * @n: number to be checked
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
}
