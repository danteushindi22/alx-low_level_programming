#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: An array of integers
 *
 * @n: The number of elements to swap
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[n-1-i];
		a[n-1-i] = a[i];
		a[i] = j;
	}
}
