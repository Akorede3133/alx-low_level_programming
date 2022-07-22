#include "main.h"

/**
 * _strcat - strcat
 * @dest: dest
 * @src: src
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while(src[i] != '\0')
	{
		i++;
	}
	
	j = 0;

	for (j = 0; src[i] != '\0'; j++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);
}
