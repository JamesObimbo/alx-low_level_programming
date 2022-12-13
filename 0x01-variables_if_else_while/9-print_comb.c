#include <stdio.h>

/**
 * main - This program prints all combinations of
 * single digit numbers
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * use putchar only for printing
 * can only use putchar four times maximum in your code
 * cannot use char variable
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
