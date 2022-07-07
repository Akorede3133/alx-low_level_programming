#include "main.h"

/**
 * print_times_table - print timestable
 * @n: para
 * Return: 0 always
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 16 && n > 0)
	{

		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				int res;

				res = i * j;
				if (res < 10)
				{
					if (j == 0)
						_putchar(res % 10 + '0');
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(res % 10 + '0');
					}
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
