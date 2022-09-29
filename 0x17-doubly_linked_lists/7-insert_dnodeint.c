#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node
 * @h: head pointer
 * @idx: index
 * @n: int
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *idx_ptr = *h;
	dlistint_t *temp = *h;
	dlistint_t *temp2 = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	int i;
	if (!new)
	{
		return (NULL);
	}
	else
	{
		int idx_count = 0;

		while (idx_ptr != NULL)
		{
			idx_count++;
			idx_ptr = idx_ptr->next;
		}
		if (idx < 0 || idx > idx_count - 1)
		{
			return (NULL);
		}
		else
		{
			new->n = n;
			if (idx == 0)
			{
				*h = new;
				new->prev = NULL;
				new->next = NULL;
			}
			else if (idx == idx_count - 1)
			{
				while (temp2->next != NULL)
				{
					temp2 = temp2->next;
				}
				temp2->next = new;
				new->prev = temp;
			}
			else
			{
				for (i = 0; i < idx - 1; i++)
				{
					temp = temp->next;
				}
				new->next = temp->next;
				temp->next = new;
				new->prev = temp;
			}
		}
		return (new);
	}
	
}
