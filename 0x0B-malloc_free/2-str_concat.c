#include <main.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL on faliure
*/

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0;
	int x, y;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*find length of str1 & str2*/
	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	/*+1 for our end of string character*/
	s = malloc((a * sizeof(char)) + ((b + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);

	/*add the first string to array s*/
	for (x = 0; s1[x] != '\0'; x++)
		s[x] = s1[x];

	/*add the second string to array s*/
	for (y = 0; s2[y] != '\0'; y++)
	{
		s[x] = s2[y];
		x++;
	}

	/*null terminate our new string*/
	s[x] = '\0';

	return (s);
}
