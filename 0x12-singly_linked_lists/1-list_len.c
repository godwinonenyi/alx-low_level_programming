#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	{
	size_t nodes = 0;

	while (h != NULL)
	{
	nodes++;
	h = h->next;
	}

	return (nodes);
	}
}
