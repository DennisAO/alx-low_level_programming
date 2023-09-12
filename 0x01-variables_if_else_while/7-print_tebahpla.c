#include <stdio.h>

/**
 * main - the prints the lowercase alphabet in reverse
 *
 * Return: Always return zero
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)

	putchar(letter);

	putchar('\n');

	return (0);
}
