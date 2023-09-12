#include <stdio.h>

/**
 * main - the  prints all the numbers of base 16 in lowercase
 *
 * Return: Always zero
 */
int main(void)
{
	int num;

	for (num = 0; num <= 16; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
