#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to a ponter to a linked list lisint_t
 *
 * Return: the head node's data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{

	int num;
	listint_t *temp = *head;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = NULL;
	*head = temp;

	return (num);
}

