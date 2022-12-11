#include <stdio.h>

/**
 * main  - Entry point
 * Return: 0
 */

int main(void)
{
	char e;
	int f;
	long int b;
	long long int c;
	float d;

	printf("Size of a char: %d byte(s)\n", sizeof(e));
	printf("Size of an int: %d byte(s)\n", sizeof(f));
	printf("Size of a long int: %d byte(s)\n", sizeof(b));
	printf("Size of a long long int: %d byte(s)\n", sizeof(c));
	printf("Size of a float: %d byte(s)\n", sizeof(d));
	return (0);
}
