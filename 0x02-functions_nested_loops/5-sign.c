#include "main.h"
/**
 * print_sign - Write a function that prints the sign of a number
 * @n: this define the int
 * Return: this returns 1, 0 and -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (0 == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
