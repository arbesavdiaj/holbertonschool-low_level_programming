#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - function
 * @head: head
 * @index: index
 * Return: NULL
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
