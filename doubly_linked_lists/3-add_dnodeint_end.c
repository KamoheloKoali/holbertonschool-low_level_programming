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

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		new->prev = NULL;
	else
	{
		new->prev = *head;
		(*head)->next = new;
	}
	return (new);
}

