#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: number of times for the line to be printed
 * Return:void
 */
void print_diagonal(int n)
{
int i;
int j;

for (i = 0; i < n; i++)
{
if (n > 1)
for (j = 0; j < i; i++)
{
_putchar('\n');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
}
_putchar('\n');
}
}
