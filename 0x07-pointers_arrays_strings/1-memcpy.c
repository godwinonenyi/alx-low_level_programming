#include "main.h"

/**
 * *_memcpy - a function that copies memory from src to dest
 * @dest: destination memory area
 * @src: pointer to the source memory
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}

	return (dest);
}
