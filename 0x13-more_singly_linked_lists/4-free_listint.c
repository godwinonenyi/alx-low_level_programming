#include "lists.h"
/**
 * free_listint - freeing the memory allocated for a singly linked
 * list
 *
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	for (; head; head = temp)
	{
	temp = head->next;
	free(head);
	}
}

