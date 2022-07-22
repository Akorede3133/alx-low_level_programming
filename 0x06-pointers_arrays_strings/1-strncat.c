#include "main.h"

/**
 * _strncat - strcat
 * @dest: dest
 * @src: src
 * @n: num
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while(src[i] != '\0')
	{
		i++;
	}
	
	j = 0;

	for (j = 0; j < n && src[i] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	for (; j < n; j++)
		dest[i + j] = '\0';
	return (dest);
}
