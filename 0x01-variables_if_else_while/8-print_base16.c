#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 * using the putchar function only for printing
 * putchar can be used a max of three times
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	int i;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (i = 97; i <= 102; i++)
		putchar((int)i);
	putchar('\n');
	return (0);
}
