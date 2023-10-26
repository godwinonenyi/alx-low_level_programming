#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 and NULL when it is b
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int num = 0;
	int i = 0;

	if (!b)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] == '0')
	{
	num <<= 1;
	}
	else if (b[i] == '1')
	{
	num <<= 1;
	num |= 1;
	}
	else
	{
	return (0);
	}
	}
	return (num);
}
