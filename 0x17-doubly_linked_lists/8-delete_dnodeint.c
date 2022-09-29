#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node
 * @head: pointer to head
 * @index: index
 * Return: int
 * /
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
size_t print_dlistint(const dlistint_t *h);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *idx_ptr = *head;
	dlistint_t *temp = *head;
	dlistint_t *temp_to_delete = *head;
	dlistint_t *after_temp_to_delete = *head;
	int idx_count = 0, i;
	if ( *head == NULL)
	{
		return -1;
	}
	else
	{

		while (idx_ptr != NULL)
		{
			idx_ptr = idx_ptr->next;
			idx_count++;
		}
		if (index < 0 || index > idx_count - 1)
		{
			return(-1);
		}
		else
		{
			if (index == 0 && *head != NULL)
			{
				
				after_temp_to_delete = temp_to_delete->next;
				*head = after_temp_to_delete;
				after_temp_to_delete->prev = NULL;
				free(temp_to_delete);
			}
			else if (index > 0 && index < idx_count - 1)
			{
				for (i = 0; i < index - 1; i++)
				{
					temp = temp->next;
				}
				temp_to_delete = temp->next;
				after_temp_to_delete = temp_to_delete->next;
				temp->next = after_temp_to_delete;
				after_temp_to_delete->prev = temp;
				free(temp_to_delete);
			}
			return_value = 1;
		}

	}
	return (return_value);
}
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
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
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	return (0);
}
