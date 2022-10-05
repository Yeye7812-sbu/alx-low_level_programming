#include "main.h"

/**
 * argstostr - concatenate all arguments of your program with newline
 *@ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *a, *ret;
	int y, x, t;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (y = 0, t = 0; y < ac; y++)
	{
		for (x = 0; *(*(av + y) + x) != '\0'; x++, t++)
			;
		t++;
	}
	t++;
	a = malloc(t * sizeof(char));

	if (a == NULL)
		return (NULL);
	ret = a;

	for (y = 0; y < ac; y++)
	{
		for (x = 0; av[y][x] != '\0'; x++)
		{
			*a = av[y][x];
			a++;
		}
		*a = '\n';
		a++;
	}
	return (ret);
}
