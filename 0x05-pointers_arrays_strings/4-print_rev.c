#include "main.h"

/**
 * print_rev - reverse
 * @s: para
 */
int length(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	return i;
}
void print_rev(char *s)
{
	int i, len;
	char *end, temp, *beg;

	len = length(s);
	end = s;
	beg = s;

	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *beg;
		*beg = temp;

		beg++;
		end--;
	}
}
