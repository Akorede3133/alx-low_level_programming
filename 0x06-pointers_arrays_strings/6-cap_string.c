#include "main.h"

/**
 * cap_string - cap
 * @s: s
 * Return: char
 */

char *cap_string(char *s)
{
	int i, diff;

	diff = 'a' - 'A';
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '\"' || s[i - 1] == ')' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n')
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
	}
	return (s);
}
