#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - add to beginning
 * @head: head pointer
 * @n: integer
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		if (*head == NULL)
		{
			*head = new;
			new->next = NULL;
			new->prev = NULL;
		}
		else
		{
			new->next = *head;
			new->prev = NULL;
			(*head)->prev = new;
			*head = new;
		}
	}
	return (new);
}
