#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_numbers - the prototype
 * Return: void
 *
 */
void print_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
