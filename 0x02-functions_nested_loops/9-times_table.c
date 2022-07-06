#include "main.h"

/**
 * times_table - print timestable
 * Return: 0 always
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int res = i * j;

			if (res < 10)
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(res % 10 + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
