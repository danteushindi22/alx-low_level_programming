#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints alphabets 'a-z'
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
