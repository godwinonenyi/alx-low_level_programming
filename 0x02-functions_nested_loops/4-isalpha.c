#include "main.h"
/**
 * _isalpha - Checks for alphabetic order
 *
 * @c: alpabet to check for
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
