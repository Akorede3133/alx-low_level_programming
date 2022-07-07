#include "main.h"

/**
 * print_times_table - print timestable
 * less_than_ten - if less than ten
 * less_than_hund - if less than 100
 * greater - if greater
 * @n: para
 * void: void
 * Return: 0 always
 */
 
void less_than_ten(void);
void less_than_hund(void);
void greater(void);
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
	else if (n == 0)
		_putchar(n % 10 + '0');
}

void less_than_ten(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}
void less_than_hund(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}
void greater(void)
{
	_putchar(',');
	_putchar(' ');
}
