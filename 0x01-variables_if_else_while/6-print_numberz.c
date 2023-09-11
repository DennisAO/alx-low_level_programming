#include <stdio.h>

/**
 * main - prints all single digit numbers of base ten starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
