#include "main.h"
#include <stdio.h>

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
		for (i = n; i >= 98; i--)
		{
			if (i > 99)
			{
				printf("%d", i);
				if (i != 98)
				{
					printf("%c%c", ',', ' ');
				}
			}
			else if  (i > 9)
			{
				printf("%d", i);
				if (i != 98)
				{
					printf("%c%c", ',' ' ');
				}
			}
			else
			{
				_putchar(i % 10 + '0');
				if (i != 98)
				{
					printf("%c%c", ',', ' ');
				}
			}
		}
		_putchar('\n');
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i > 9)
			{
				printf("%d", i);
				if (i != 98)
				{
					printf("%c%c", ',', ' ');
				}
			}
			else
			{
				_putchar(i % 10 + '0');
				if (i != 98)
				{
					printf("%c%c", ',', ' ');
				}
			}
		}
		_putchar('\n');
	}
}
