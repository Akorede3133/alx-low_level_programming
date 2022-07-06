#include "main.h"

/**
 * print_alphabet_x10 - print alpha 10 times
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int i = 0;


	while (i < 10)
	{
		int l = 'a';


		while (l <='z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		i++;
	}
}
