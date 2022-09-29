#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print list
 * @h: head pointer
 * Return: number of numbers
 */

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
