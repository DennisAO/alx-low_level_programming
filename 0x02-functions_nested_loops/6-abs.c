#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer.
 * Return: m returns negative when lower that 0 and + when greater than 0
 * @i: i is the integer
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
