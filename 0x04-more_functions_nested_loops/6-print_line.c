#include "main.h"

/**
 * print_line - prints a straight line n times.
 *
 * @n: times the line printed.
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

