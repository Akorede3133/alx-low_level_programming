#include "main.h"

/**
 * print_alphabet_x10 - print alpha 10 times
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int l;


	for (int i = 0; i < 10; i++)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
	}
}
