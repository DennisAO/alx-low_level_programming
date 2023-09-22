#include "main.h"
/**
 * reverse_array - name of prototype
 * Return: void
 * @a: string
 * @n: string
 *
 */
void reverse_array(int *a, int n)
{
	int y, b;

	for (y = 0; y < n--; y++)
	{
	b = a[y];
	a[y] = a[n];
	a[n] = b;
	}
}
