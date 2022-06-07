#include "main.h"
#include <stdio.h>


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
		putchar(a[b]);
		b++;
	}
	putchar('\n');

	return (0);
}
