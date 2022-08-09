#include "main.h"

/**
 * _strchr - strchr
 * @s: para
 * @c: c
 * Return: char
 */

char *_strchr(char *s, char b)
{
	while (*s != '\0')
	{
		if (*s == b)
		{
			return (s);
		}
		s++;
	}
	if (*s == b)
	{
		return (s);
	}
	return (NULL);
}
