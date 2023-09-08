#include <stdio.h>
/**
 * main - the main
 *
 * Return: mostly zero
 */

int main(void)
{
	printf("Size of a char: %ni  byte(s)", sizeof(char));
	printf("Size of an int: %ni byte(s)", sizeof(int));
	printf("Size of a long int: %ni byte(s)", sizeof(long int));
	printf("Size of a long long int: %ni byte(s)", sizeof(long long int));
	printf("Size of a float: %ni byte(s)", sizeof(float));
	return (0);

}
