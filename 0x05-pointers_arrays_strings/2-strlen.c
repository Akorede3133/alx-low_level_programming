#include "main.h"

/**
 * _strlen - prints length of a string
 * @s: para
 * Return: 0 always
 */

int _strlen(char *s)
{
	int i, sum;

	sum = 0;

	for (i = 0; *s; i++)
	{
		sum++;
		*s++;
	}
	return (sum);
}
