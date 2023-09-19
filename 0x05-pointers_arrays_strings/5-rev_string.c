#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * Return: zero
 * @s: parameter
 *
 */
void rev_string(char *s)
{
	int a;
	int count = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		count++;
	for (a = 0 ; a < count / 2; a++)
	{
	char y;

	y = s[a];
	s[a] = s[count - 1 - a];
	s[count - 1 - a] = y;
	}
}
