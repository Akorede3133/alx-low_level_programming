#include "main.h"

/**
 * rev_string - reverse
 * @s: para
 */
void rev_string(char *s)
{
	int i, len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	char *end, temp, *beg;

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
