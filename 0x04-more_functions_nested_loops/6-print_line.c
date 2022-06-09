#include "main.h"

/**
 * print_line - draws a straight line using _
 * @n: the numbers of _characters to be printed
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
