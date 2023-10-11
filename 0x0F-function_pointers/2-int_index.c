#include "function_pointers.h"
/**
* int_index - function that searches for an integer.
* @array: array
* @size: number of elements in the array array
* @cmp:  is a pointer to the function to be used to compare   values
* Return: 0
*/
	int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
	return (-1);
	}
	for (k = 0; k < size; k++)
	{
	if (cmp(array[k]))
	return (k);
	}
	return (-1);
}
