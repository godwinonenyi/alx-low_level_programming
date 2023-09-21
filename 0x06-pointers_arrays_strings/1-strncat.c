#include "main.h"


/**
 * _strncat - Concatenate two strings with a maximum of n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;


	while (dest[dest_len] != '\0')
	{
	dest_len++;
	}


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[dest_len + i] = src[i];
	}


	dest[dest_len + i] = '\0';

	return (dest);
}
