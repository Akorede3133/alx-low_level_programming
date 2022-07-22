#include "main.h"

/**
 * puts_half - half
 * @str: para
 */
int length(char *str);

void puts_half(char *str)
{
	int j, val;

	val = length(*str);

	for (j = 0; str[j] != '\0'; j++)
	{
		if (j > (val - 1) / 2)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}

/**
 * length - length
 * @str: para
 * Return: 0 always
 */
int length(char *str)
{
	int i, sum;

	sum = 0;

	for (i = 0; *str; i++)
	{
		sum++;
		str++;
	}
	return (sum);
}

