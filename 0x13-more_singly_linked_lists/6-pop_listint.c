#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the first element of the list
 *
 * Return: the head node's data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{

	int num;
	listint_t *temp = *head;

	if (!head || !*head)
	return (0);

	while (temp->next)
	{
	temp = temp->next;
	}

	num = (*head)->n;
	free(*head);
	*head = NULL;
	*head = temp;

	return (num);
}

