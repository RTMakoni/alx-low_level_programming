#include "main.h"

/**
 * print_alphabet - prints the alpha in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	_putchar('\n');

}
