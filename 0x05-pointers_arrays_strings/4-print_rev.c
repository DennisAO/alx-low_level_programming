#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * Return: zero
 * @s: parameter
 *
 */
void print_rev(char *s)
{
	int a;
	int count = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		count++;

	for (a = count - a ; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
