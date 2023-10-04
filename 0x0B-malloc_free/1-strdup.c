#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space
 *  in memory,which contains a copy of the string given as a parameter
 *  @str: string
 *  Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *elo;
	int i, j;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	i++;
	elo = malloc(sizeof(char) * (i + 1));
	if (elo == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		elo[j] = str[j];
	return (elo);
}
