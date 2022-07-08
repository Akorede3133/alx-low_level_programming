#include "main.h"
/**
 * print_triangle - print triangle
 * @size: para
 * Return: 0 success
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		if (i < size)
			_putchar('\n');
	}
	_putchar('\n');
}
