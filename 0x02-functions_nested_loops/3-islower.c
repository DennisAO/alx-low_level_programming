#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * Return: it returns 1 if a is a lower case and 0 if its not
 * @c: this is a lower case int
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
