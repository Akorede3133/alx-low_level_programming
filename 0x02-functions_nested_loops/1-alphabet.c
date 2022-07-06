#include "main.h"

/**
 * print_alphabet - print alphabets
 * Return: 0 on success
 */

void print_alphabet(void)
{
	int l;

	l = 'a';
	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
