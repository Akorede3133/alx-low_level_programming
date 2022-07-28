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
	int *ptr;

	ptr = malloc(size);

	if (ptr != NULL)
	{
		ptr[0] = c;
		return (0);
	}
	else
	{
		return (1);
	}
}
