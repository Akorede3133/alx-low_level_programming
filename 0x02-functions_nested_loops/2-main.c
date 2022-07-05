#include "main.h"
#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
