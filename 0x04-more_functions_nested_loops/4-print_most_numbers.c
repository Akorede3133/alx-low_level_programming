#include "main.h"
/**
 * print_most_numbers - print most nums
 * Return: 0 success
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i % 10 + '0');
	}
	_puchar('\n');
}
