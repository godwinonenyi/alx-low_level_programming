#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: character of string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}
