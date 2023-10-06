#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring needle in the string
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the begining of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);

while (*haystack)
{
char *h = haystack;
char *n = needle;

while (*h == *n && *n != '\0')
{
h++;
n++;
}

if (*n == '\0')
return (haystack);
haystack++;
}

return (NULL);
}
