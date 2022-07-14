#include "main.h"

/**
 * puts_half - half
 * @str: para
 */

void puts_half(char *str)
{
	int i, sum, j;

	sum = 0;
	for (i = 0; *str; i++)
	{
		sum++;
		str++;
	}
	
	for (j = sum / 2; *str; j++)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
