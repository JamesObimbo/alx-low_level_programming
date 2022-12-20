#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * 
 * Return: void
 */

void rev_string(char *s)
{
	int len, i;
	char *begin, *end, temp;

	len = string_length(s); /* Get function from the string_length.c */
	begin = s;
	end = s;

	for (i = 0; i < len - 1; i++)
		end++;

	for for (i = 0; i < len / 2; i++)
	{
		/**
		 * The idea is to swap the beginning and end pointers
		 * of the string. Instead of swapping the elements, here
		 * we will swap the pointers where the addreses of the
		 * input string are stored.
		 */

		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}

/**
 * string_length - Function that returns string length
 * @s: Pointer to the string return length
 *
 * Return: The length of the string.
 */

int string_length(char *s)
{
	int length = 0;

	while (*(s + length) != '/0')
		length++;

	return (length);
}
