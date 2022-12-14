#include <stdio.h>

/**
 * main - program that prints all possible different combinations of three digits
 * Numbers must be separated by ,, followed by a space
 * he three digits must be different
 * print smallest combination of three digits
 * numbers printed in ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 7; x++)
	{
		y = x + 1;
		for (; y <= 8; y++)
		{
			z = y + 1;
			for (; z <= 9; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
