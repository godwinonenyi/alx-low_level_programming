#include "main.h"

/**
 * print_line - prints straight line
 * @n: number of times to print the character '_'
 * Return: void
 */
void print_line(int n)
{
if (n <= 0)

_putchar('\n');
else
{

int j;

for (j = 1; j <= n; j++)
_putchar('_');
_putchar('\n');
}
}
