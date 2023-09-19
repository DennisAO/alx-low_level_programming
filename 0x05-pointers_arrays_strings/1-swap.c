#include "main.h"
/**
 * swap_int - swap of *a with *b
 * Return: always zero
 * @a: the first int
 * @b: the second int
 *
 */
void swap_int(int *a, int *b)
{
	int y = *a;
	*a = *b;
	*b = y;

}
