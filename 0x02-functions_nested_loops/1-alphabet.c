#include <stdio.h>

/**
 * print_alphabet - Prints alphabets 'a-z'
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	putchar('\n');

}
int main(void)
{
	printf("The Alphabets are: %s\n", print_alphabet);
}
