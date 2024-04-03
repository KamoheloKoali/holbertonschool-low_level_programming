#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - add a new node at the beginning of list
 * @head: pointer to first node in list
 * @n: data to be stored in new node
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
		new->next = NULL;
	else 
	{
		new->next = *head;
		(*head) = new;
	}
	*head = new;
	return (new);
}

