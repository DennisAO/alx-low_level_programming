#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 * Return: zero
 * @a: first parameter
 * @n: second parameter
 *
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0 ; y < n ; y++)
	{
	printf("%d", a[y]);

	if (y < n - 1)
		printf(", ");
	}
	printf('\n');
}
