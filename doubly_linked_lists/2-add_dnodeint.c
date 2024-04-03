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
		return (NULL);
	if (head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
		*head = new;
		return (*head);
	}
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	(*head)->prev = new;
	*head = new;
	return (*head);
}

