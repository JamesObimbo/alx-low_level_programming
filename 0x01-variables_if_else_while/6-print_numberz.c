#include <stdio.h>

/** main - Entry point
 * program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line
 * using only putchar to print
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 9; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
