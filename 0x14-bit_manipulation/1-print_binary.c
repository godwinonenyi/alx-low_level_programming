#include "main.h"

/**
 * _pow - Calculate (base ^ power) using exponentiation by squaring.
 * @base: Base of the exponent.
 * @power: Power of the exponent.
 *
 * Return: Value of (base ^ power).
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int result = 1;
	unsigned long int x = base;

	if (power == 0)
        return 1;

	while (power > 0)
	{
	if (power % 2 == 1)
	result *= x;
	x *= x;
	power /= 2;
	}

	return result;
}
/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
        unsigned long int divisor, check;
        char flag;


        flag = 0;
        divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
        while (divisor != 0)
        {
                check = n & divisor;
                if (check == divisor)
                {
                        flag = 1;
                        _putchar('1');
                }
                else if (flag == 1 || divisor == 1)
                {
                        _putchar('0');
                }
                divisor >>= 1;
        }
}
