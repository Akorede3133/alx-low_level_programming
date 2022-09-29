#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - add at the end
 * @head: head pointer
 * @n: integer
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;
	if (!new)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			new->prev = NULL;
		}
		else
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = new;
			new->prev = temp;
		}
	}
	return (new);
}
