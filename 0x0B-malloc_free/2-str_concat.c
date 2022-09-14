#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat
 * @s1: para
 * @s2: para
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, len3, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
        if (s2 == NULL)
                 s2 = "";
	else
	{
		len1 = 0;
		while (s1[len1] != '\0')
		{
			len1++;
		}
		len2 = 0;
		while (s2[len2] != '\0')
		{
			len2++;
		}
		len3 = len1 + len2;
		ptr = malloc(sizeof(char) * len3 + 1);
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; s1[i] != '\0'; i++)
			{
				ptr[i] = s1[i];
			}
			for (i = 0; s2[i] != '\0'; i++)
			{
				ptr[i + len1] = s2[i];
			}
		}
	}
	return (ptr);

}
