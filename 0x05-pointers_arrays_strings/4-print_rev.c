#include "main.h"
/**
 * print_rev - prinst a string in reverse
 *
 * @s: the string to be printed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (i--; i >= 0; i--)
	_putchar(s[i]);
	_putchar('\n');
}
