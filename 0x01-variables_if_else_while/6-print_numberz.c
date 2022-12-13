#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * starting with 0, followed by a new line
 * using only putchar to print
 * and without using char
 */
int main(void)
{
	int i;

	for (i = 1; i <= 9; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
