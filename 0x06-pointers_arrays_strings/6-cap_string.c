#include "main.h"

/**
 * cap_string - cap
 * @s: s
 * Return: char
 */

char *cap_string(char *s)
{
	int i, diff, j, len;
	char a[] = " \t\n,;.!?\"(){}";

	diff = 'a' - 'A';
	len = 0;
	while (a[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i - 1] == a[j])
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
	}
	return (s);
}
