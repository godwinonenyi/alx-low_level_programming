#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) in a listint_t list
 * @head: pointer to the first node in the list
 *
 * Return: the sum of all data values, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
	{
	sum += head->n;
	}

	return (sum);
}

