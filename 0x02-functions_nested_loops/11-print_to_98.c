#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: para
 * Return: 0 always
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			if (i > 99)
			{
				_putchar(i / 100 + '0');
				_putchar(i / 10 % 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if  (i > 9)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
