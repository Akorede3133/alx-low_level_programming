#include "main.h"

/**
 * _atoi - converts to int
 * @s: para
 * Return: int
 */

int _atoi(char *s)
{
	int i, num, neg;

	num = 0;
	neg = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = num * 10 + (s[i] - 48);
			if (s[i - 1] == '-' && s[i - 1] == '+')
				neg = -1;
		}
		if (s[i] == '-' && s[i] == '+')
			neg = -1;
	}
	return (num * neg);
}
