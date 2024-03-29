#include "function_pointers.h"

/**
 * int_index - index
 * @array: array
 * @size: size
 * @cmp: cmp
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		if (array && cmp)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
		return (-1);
	}
}
