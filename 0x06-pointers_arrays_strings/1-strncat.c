#include "main.h"
/**
 * *_strncat - Name of parameter
 * Return: dest
 * @src: string one
 * @dest: string two
 * @n: n bytes from src
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
	a++;
	}
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
