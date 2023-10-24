#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index of a listint_t
 * linked list.
 * @head: pointer to a pointer to a linked list listint_t
 * @index: index of the node that should be deleted
 *
 * Return: 1 if successful, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i;
	listint_t *temp = *head;

	if (!head || !*head)
	return (-1);

	if (index == 0)
	{
	*head = temp->next;
	free(temp);
	return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
	if (!temp || !(temp->next))
	return (-1);
	temp = temp->next;
	}

	if (temp && temp->next)
	{

	listint_t *current = temp->next;

	temp->next = current->next;

	free(current);
	return (1);
	}

	return (-1);
}

