#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - add a new node at the end of list
 * @head: pointer to first node in list
 * @n: data to be stored in new node
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL)
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		new->prev = *current;
		current->next = new;
	}
	return (new);
}

