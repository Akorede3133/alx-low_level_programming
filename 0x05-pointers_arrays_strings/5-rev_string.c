#include "main.h"

/**
 * rev_string - reverse
 * @s: para
 */
/**
 * length - len
 * @s: para
 * Return: int
 */
int length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
void rev_string(char *s)
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
		end--;
		beg++;
	}
}
