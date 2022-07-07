#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: para
 * Return: 0 always
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}

