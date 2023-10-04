#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of my program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, n, k = 0, l = 0;
	char *aout;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
		l++;
	}
	l += ac;
	aout = malloc(sizeof(char) * l + 1);
	if (aout == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (k = 0; av[i][n]; n++)
	{
		aout[k] = av[i][n];
		k++;
	}
	if (aout[k] == '\0')
	{
		aout[k++] = '\n';
	}
	}
	return (aout);
}
