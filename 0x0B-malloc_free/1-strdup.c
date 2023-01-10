#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space,
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to be duplicated.
 * Return: NULL (fail) or a pointer to the duplicated string (success).
 * Also return NULL if str = NULL or insufficient memory is available.
 */

char *_strdup(char *str)
{
	char *cop;
	unsigned int i;

	/* if str is NULL, return NULL */
	if (str == NULL)
		return (NULL);

	/* allocate enough memory for cop */
	cop = malloc(_strlen(str) + 1);

	/* if malloc fails, return NULL */
	if (cop == NULL)
		return (NULL);

	/* copy string inside str to cop */
	for (i = 0; str[i] != '\0'; i++)
		cop[i] = str[i];

	/* append null terminator to cop */
	cop[i] = '\0';

	return (cop);
}
