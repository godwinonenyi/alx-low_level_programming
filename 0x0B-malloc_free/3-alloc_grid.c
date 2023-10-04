#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * alloc_grid function.
 * @width: width to input
 * @height: height to input
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{

	int **lor;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	lor = malloc(sizeof(int *) * height);
	if (lor == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		lor[i] = malloc(sizeof(int) * width);
		if (lor[i] == NULL)
		{
		for (; i >= 0; i--)
		free(lor[i]);
		free(lor);
		return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			lor[i][j] = 0;
	}
	return (lor);
}
