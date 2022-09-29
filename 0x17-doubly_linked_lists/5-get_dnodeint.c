#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to head
 * @index: index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *count_ptr = head;
	int num_count = 0, i;

	while (count_ptr != NULL)
	{
		num_count++;
		count_ptr = count_ptr->next;
	}
	if (index < 0 || index > num_count - 1 || head == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			head = head->next;
		}
		return (head);
	}
}