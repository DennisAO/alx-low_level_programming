#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * Return: on this the return is void
 */

void print_alphabet_x10(void)
{
	int j;
	char y;

	for (j = 1 ; j <= 10 ; j++)
		{
		for (y = 'a' ; y <= 'z' ; y++)
		_putchar('x');
		}
	_putchar('\n');
}
