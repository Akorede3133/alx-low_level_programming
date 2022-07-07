#include "main.h"

/**
 * print_times_table - print timestable
 * @n: para
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
						less_than_ten();
				}
				else if (res < 100)
					less_than_hund();
				else
					greater();
			}
			_putchar('\n');
		}
	}
}

void less_than_ten(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar(res % 10 + '0');
}
void less_than_hund(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(res / 10 + '0');
	_putchar(res % 10 + '0');
}
void greater(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(res / 100 + '0');
	_putchar(res / 10 % 10 + '0');
	_putchar(res % 10 + '0');
}
