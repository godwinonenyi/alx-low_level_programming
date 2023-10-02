#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: number to implement square root
 *
 * Return: 0
 */
int _sqrt_recursion(int n)

{
	return (sqrt_a(n, 0));

}

/**
 * sqrt_a - return the natural square root of
 * a number
 * @a: input number
 * @b: iterator
 * Return: square root or -1
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	{
	else
	}
	}
		return (sqrt_a(a, i + 1));
}
