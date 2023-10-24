#include "lists.h"

/**
 * *add_nodeint_end - adds a node at the end of a listint_t list
 * @head: pointer to the first element in listint_t
 * @n: data to insert in the new element
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!newnode)
	return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (!*head)

	*head = newnode;
	else
	{
	listint_t *temp = *head;

	while (temp->next)
	temp = temp->next;
	temp->next = newnode;
	}
	return (newnode);
}
