#include "main.h"

/**
 * jack_bauer - prints 23 minutes and 59 seconds
 * Return: 0 always
 */

void jack_bauer(void)
{
	int i, j, k, l;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar(i % 10 + '0');
					_putchar(j % 10 + '0');
					_putchar(':');
					_putchar(k % 10 + '0');
					_putchar(l %  10 + '0');
					if ( i != 2 || j != 3 || k != 5 || l != 9)
					{
						_putchar('\n');
					}
				}
			}
		}
	}
	_putchar('\n');
}
