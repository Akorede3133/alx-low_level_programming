#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy
 * @str: para
 * Return: char
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		len = 0;
		while (str[len] != '\0')
		{
			len++;
		}
		ptr = malloc(sizeof(char) * len + 1);
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; str[i] != '\0'; i++)
			{
				ptr[i] = str[i];
			}
		}
	}
	return (ptr);

}
