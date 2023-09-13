#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: this represent the letter irrespective of the case
 * Return: 1 if true and 0 for false
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
