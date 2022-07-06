#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: para
 * Return: 0 always
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 10)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(i / 10 + '0');
			_putchar(i + '0');
			if ( i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
