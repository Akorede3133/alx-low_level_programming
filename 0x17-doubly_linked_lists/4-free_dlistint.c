#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: pointer to head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head->next != NULL)
	{
		current = head;
		free(current);
		head = head->next;
	}
}
