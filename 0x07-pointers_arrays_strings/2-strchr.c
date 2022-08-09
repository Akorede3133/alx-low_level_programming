#include "main.h"

/**
 * _strchr - strchr
 * @s: para
 * @c: c
 * Return: char
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0' && *s != c; ++s)
		;
	return ((*s == c) ? (char *) s : NULL);
}
