#include <stdio.h>

/**
 * main - the prints the lowercase alphabet in reverse
 *
 * Return: Always return zero
 */
int main(void)
{
	char le;

	for (le = 'z' ; le <= 'a' ; le--)
		putchar(le);
	putchar('\n');
	return (0);
}
