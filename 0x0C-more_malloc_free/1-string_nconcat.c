#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: number of characters from s2 to concatenate
 *
 * Return:pointer to the concatenated string or NULL on fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ln1, ln2, i, j;
	char *concat;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	ln1 = strlen(s1);
	ln2 = strlen(s2);

	if (n >= ln2)
	n = ln2;

	concat = malloc(ln1 + n + 1);
	if (concat == NULL)
	return (NULL);

	for (i = 0; i < ln1; i++)
	concat[i] = s1[i];

	for (j = 0; j < n; j++)
	concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
