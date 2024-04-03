#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - delet node at spicified position in the list
 * @head: pointer to first node in list
 * @index: position to delete node in list
 * Return: pointer to new node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0, last = 0;

	if  (*head == NULL)
		return (-1);
	while (current->next != NULL)
	{
		current = current->next;
		last++;
	}
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (count == index)
		{
			if (index == last)
			{
				current->prev->next = NULL;
				free(current);
			} else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
				free(current);
			}
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}

