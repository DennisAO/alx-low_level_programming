#include <stdio.h>

/**
 * main - print alphabet a-z
 *
 * Return: may not always be zero
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
