#include "main.h"
/**
 * _strcmp - The name of the string
 * Return: zero
 * @s1: sring
 * @s2: string
 *
 */
int _strcmp(char *s1, char *s2)
{
int y = 0;

while (s1[y] != '\0' && s2[y] != '\0')
{
	if (s1[y] != s2[y])
	{
	return (s1[y] - s2[y]);
	}
	y++;
	}
	return (0);
}
