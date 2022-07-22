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
	int len, i;

	len = 0;
	while(src[len] != '\0')
	{
		len++;
	}
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	for (; i < n; i++)
		dest[len + i] = '\0';
	return (dest);
}
