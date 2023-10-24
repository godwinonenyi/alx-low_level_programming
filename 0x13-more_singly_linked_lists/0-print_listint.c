#include "lists.h"

/**
 * print_listint - function that prints all the elements of
 * a listint_t list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	for (numb = 0; h != NULL; numb++)
	printf("%d\n", h->n);
	h = h->next;

	return (numb);
}
