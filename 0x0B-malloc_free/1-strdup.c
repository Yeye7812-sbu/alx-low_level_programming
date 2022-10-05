#include "main.h"

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{

	char *s;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(i * sizeof(*s) + 1);
	if (s == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		s[c] = str[c];
	s[c] = '\0';

	return (a);
}
