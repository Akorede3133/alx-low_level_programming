#include "main.h"

/**
 * _puts - prints strings
 * @str: para
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str; i++)
		_putchar(*str++);
}
