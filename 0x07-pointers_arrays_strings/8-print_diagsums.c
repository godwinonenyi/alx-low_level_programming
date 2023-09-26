#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix
 *
 * @a: array of int type
 * @size: size of the array
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
int *prt1 = a;
int *prt2 = a + size - 1;

for (i = 0; i < size; i++)
{
sum1 += *prt1;
sum2 += *prt2;
prt1 += size + 1;
prt2 += size - 1;
}

printf("%d, %d\n", sum1, sum2);
}
