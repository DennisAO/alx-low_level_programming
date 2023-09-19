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
	int string = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		string++;

	for (a = string - a ; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
