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
	int i, len1, len2, j;

	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		s1[i + len1] = s2[i];
	}

	while(s1[len2] != '\0')
	{
		len2++;
	}

	ptr = malloc(sizeof(char) * len2 + 1);

	if (ptr != NULL)
	{
		if (s1 == NULL && s2 == NULL)
		{
			ptr = NULL;
		}
		else
		{
			for (j = 0; s1[j] != '\0'; j++)
			{
				ptr[j] = s1[j];
			}
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
