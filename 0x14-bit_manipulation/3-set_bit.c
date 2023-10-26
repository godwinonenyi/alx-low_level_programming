#include "main.h"

/**
 * get_bit - Returns the value of bit at a given index.
 * @n: Number to check bits in.
 * @index: Index
 *
 * Return: Value of the bit at the given index, or -1 if there is an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
        return (-1);

	return ((n >> index) & 1);
}
