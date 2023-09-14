#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function that prints the last digit of a number.
 * @y: the number been printed
 * Return: this is return as an int.
 */

int print_last_digit(int y)
{
	int z;

	z = y % 10;
		if (y < 0)
		z = -z;
	_putchar('0' + z);
	return (z);
}
