#include "main.h"

/**
 * _strchr - strchr
 * @s: para
 * @c: c
 * Return: char
 */

char *_strchr(char *s, char b)
{
	for (; *s != '\0'; s++)
	{
		if (*s == b)
		{
			return (s);
		}
	}
	if (*s == b)
	{
		return (s);
	}
	return (NULL);
}
