#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array
 * @size: size
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);

	if (ptr != NULL)
	{
		if (size != 0)
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
