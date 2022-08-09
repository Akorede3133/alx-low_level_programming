#include "main.h"

/**
 * _memset - mem set
 * @s: para
 * @b: para
 * @n: para
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
