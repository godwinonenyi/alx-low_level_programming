#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: string that need to be duplicated
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new = malloc(sizeof(list_t));

	if (!head || !str)
	return (NULL);

	if (!new)
	return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
	free(new);
	return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
