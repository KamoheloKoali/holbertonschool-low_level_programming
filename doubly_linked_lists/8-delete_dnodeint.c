#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - delet node at spicified position in the list
 * @head: pointer to first node in list
 * @idx: position to delete node in list
 * Return: pointer to new node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *h;
	unsigned int count = 0, last;

	if  (*h == NULL)
		return (-1);
	for (last = 0; current != NULL; last++)
		current = current->next;
	if (idx > last)
		return (-1);
	current = *h;
	while (current != NULL)
	{
		if (count == idx)
		{
			if (index == 0)
			{
				*head = current->next;
				free(current);
				break;
			} else if (index == last)
			{
				current->next->prev = NULL;
				free(current);
				break;
			} else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
				free(current);
				break;
			}
		}
		current = current->next;
		count++;
	}
	return (1);
}
