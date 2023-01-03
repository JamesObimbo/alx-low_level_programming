#include "main.h"
#include <stdio.h>

/**
 * *_strstr - This function locates a substring
 * @haystack: The string to search through
 * @needle: The substring to search for
 * Return: A pointer to the beginning of the located string; Otherwise, NULL
 */

char *_strstr(char *haystack, char *needle)
{
	/**
	 * initialize a helping variable
	 * to assist in returning one of
	 * our parameters pointers haystack
	 */
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
