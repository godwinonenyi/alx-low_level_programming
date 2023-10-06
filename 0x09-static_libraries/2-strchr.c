#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: input string
 * @c: character to search for
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{


	if (s == NULL)
	{
	return (NULL);
	for (; *s != '\0'; s++)
{
	if (*s == c)
	{
	return (s);
	}
	}
	return (NULL);

	}
}
