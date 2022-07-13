#include "main.h"

/**
 * puts2 - prints by even
 * @str - para
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *str; i++)
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
