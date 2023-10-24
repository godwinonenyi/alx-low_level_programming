#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: data to insert to new node
 *
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i;

	if (!new)
	return (NULL);

	if (!head)
	return (NULL);
	new->n = n;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}

	for (i = 0; temp; i++)
	{
	if (i == idx - 1)
	{
	new->next = temp->next;
	temp->next = new;
	return (new);
	}
	temp = temp->next;
	}

	free(new);
	return (NULL);
}
