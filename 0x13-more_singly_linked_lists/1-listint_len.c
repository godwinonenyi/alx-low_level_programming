#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a
 * listint_t list
 * @h: linked list of type listint_t
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	for (; h; h = h->next, numb++)
	{}

	return (numb);
}
