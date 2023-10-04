#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars, and initialize
 * it with a specific character
 * @size: size of array
 * @c: character to assign
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)

{
	char *str;

	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
