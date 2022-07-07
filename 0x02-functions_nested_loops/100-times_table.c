#include "main.h"

/**
 * print_times_table - print timestable
 * @n: para
 * Return: 0 always
 */
void less_than_ten();
void less_than_hund();
void greater();

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
						less_than_ten();
						_putchar(res % 10 + '0');
					}
				}
				else if (res < 100)
				{
					less_than_hund();
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
				else
				{
					greater();
					_putchar(res / 100 + '0');
					_putchar(res / 10 % 10 + '0');
					_putchar(res % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}

void less_than_ten()
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}
void less_than_hund()
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}
void greater()
{
	_putchar(',');
	_putchar(' ');
}
