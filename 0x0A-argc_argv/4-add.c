#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive numbers
 * @argc: number of command line arguement
 * @argv: array that contains the program command line arguement
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int i, j, k = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		k += atoi(argv[i]);
	}
	printf("%d\n", k);
	return (0);
}
