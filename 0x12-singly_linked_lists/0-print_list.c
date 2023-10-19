#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	for (; h; h = h->next, s++)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	}

	return (s);
}

