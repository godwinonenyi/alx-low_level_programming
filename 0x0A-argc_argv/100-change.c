#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coin to make
 * a change for an amount of money
 * @argc: number of command line arguement
 * @argv: array that holds the command line arguement
 * Return: 0
 */
int main(int argc, char **argv)
{
	int cents, coins = 0; /*coins is in minimum number*/

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
