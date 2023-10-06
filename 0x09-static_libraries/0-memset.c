#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 *
 * @s: pointer to the no of memory byte
 * @b: constant byte
 * @n: no of byte of the memory
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}





