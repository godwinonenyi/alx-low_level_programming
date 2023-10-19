#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: double pointer to list_t list
 * @str: string thst needs duplication
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int len = 0;

	if (!head || !str)
	return (NULL);

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
	free(new);
	return (NULL);
	}

	while (str[len])
	len++;

	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	temp = *head;
	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
}
