#include "function_pointers.h"

/**
 * array_iterator - iterator
 * @array: arr
 * @size: size
 * @action: action
 *
 * Return: Nothinh
 */

void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
