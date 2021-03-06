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

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	ptr = malloc(sizeof(char) * len + 1);

	if (ptr != NULL)
	{
		if (str != '\0')
		{
			for (i = 0; str[i] != '\0'; i++)
			{
				ptr[i] = str[i];
			}
		}
		else
		{
			ptr = NULL;
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
