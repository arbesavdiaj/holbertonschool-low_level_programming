#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to duplicate into the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new == NULL)
		exit(EXIT_FAILURE);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		exit(EXIT_FAILURE);
	}
	new->len = strlen(str);

	new->next = *head;
	*head = new;

	return (new);
}
