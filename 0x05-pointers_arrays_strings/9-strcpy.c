#include "main.h"
/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: parameter 1
 * @src: parameter 2
 * Return: dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0 ; src[a] != '\0' ; a++)
	{
		dest[a] = src[a];
		dest[a] = '\0';
	}
	return (dest);
}
