#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *  dlistint_len -  list count
 * @h: head pointer
 * Return: number of numbers
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
