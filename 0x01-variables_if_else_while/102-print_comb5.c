#include <stdio.h>

/**
 * main - program that prints all possible combinations of two two-digit numbers
 *
 * numbers should range from 0 to 99
 * two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * numbers must be separated by comma, followed by a space
 * combination of numbers to be printed in ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;
	int i, j; /* counters */

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			a = (i / 10) + '0';
			b = (i % 10) + '0';
			c = (i / 10) + '0';
			d = (i % 10) + '0';
			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
