#include "main.h"

/**
 * string_toupper - to upper
 * @s: str
 * Return: char
 */

char *string_toupper(char *s)
{
	int i, diff;


	diff = 'a' - 'A';
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] = s[i] - diff;
		}
		else
		{
			s[i] = s[i];
		}
	}
	return (s);
}
