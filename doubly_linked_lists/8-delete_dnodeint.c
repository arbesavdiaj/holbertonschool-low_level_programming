#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - function
 * @head: head
 * @index: index
 *
 * Return: 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;

	if (temp == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index)
	{
		if (i == index)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (1);
}
