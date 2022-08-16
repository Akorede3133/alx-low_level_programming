#include "function_pointers.h"

/**
 * array_iterator - iterator
 * @array: arr
 * @size: size
 * @action: action
 *
 * Return: Nothinh
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
