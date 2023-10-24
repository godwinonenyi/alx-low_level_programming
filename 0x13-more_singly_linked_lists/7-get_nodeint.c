#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node in the linked list
 * @index: index of the node,starting at 0
 *
 * Return: the node head or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index > 0)
	{
	head = head->next;
	index--;
	}

	return (head);
}

