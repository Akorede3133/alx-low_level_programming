#include "main.h"
/**
 * print_square - prints square
 * @size: para
 * Return: 0 always
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			if (i != size)
				_putchar('\n');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
