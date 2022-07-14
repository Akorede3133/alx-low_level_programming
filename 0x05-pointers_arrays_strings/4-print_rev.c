#include "main.h"

/**
 * print_rev - reverse
 * @s: para
 */

void print_rev(char *s)
{
	int i;

	for (i = '\0'; *s >= 0; i--)
		_putchar(*s--);
	_putchar('\n');
}
