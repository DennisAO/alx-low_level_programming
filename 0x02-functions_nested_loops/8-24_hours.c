#include "main.h"
#include <stdio.h>
/**
 * jack_bauer -  function that prints every minute of the day of Jack Baue
 * Return: zero is retuned
 */


void jack_bauer(void)
{
	int a, b;

	a = 0;
	while (a < 24)
	{
		b = 0;
		while (b < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
	       a++;
	}
}
