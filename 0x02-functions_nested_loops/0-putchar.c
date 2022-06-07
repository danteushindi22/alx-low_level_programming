#include "main.h"



/**
 * main - Entry point, print _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b = 0;
	char a[] = "_putchar";

	while (b < 9)
	{
		_putchar(a[b]);
		b++;
	}
	_putchar('\n');

	return (0);
}
