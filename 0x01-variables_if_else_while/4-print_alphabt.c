#include <stdio.h>

/**
 * main - Prints the lowercase alphabet, excluding 'e' and 'q'.
 *
 * Return: Always 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	for (a != 'e' && a != 'q')
		putchar(a);
       	putchar('\n');
	return (0);
}
