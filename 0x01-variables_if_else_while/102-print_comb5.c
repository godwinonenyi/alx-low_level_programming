#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)

{
	int i;
	int j;

	for (i = 0; i < 10; i++)
{

	for (j = 0; j < 10; i++)
{
	putchar((i % 10) + '0');
	putchar((j % 10) + '0');

	if (i == 9 && j == 9)
	continue;

	putchar(',');
	putchar(' ');
}

}

	putchar('\n');

	return (0);
}
