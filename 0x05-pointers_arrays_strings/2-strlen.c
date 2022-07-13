#include "main.h"

/**
 * _strlen - prints length of a string
 * @s: para
 * Return: 0 always
 */

int _strlen(char *s)
{
	int i;

	for(i = 0; *s; i++)
		_putchar("%c", *s++);
	return (0);
}
