#include "main.h"

/**
 * _strcmp - compare
 * @s1: para
 * @s2: para
 * Return: int
 */

int *_strcmp(char *s1, char *s2)
{
	int i, res;


	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i] && s1[i] > s2[i])
		{
			res = s1[i] - s2[i];
		}
		else if (s1[i] != s2[i] && s2[i] > s1[i])
		{
			res = s2[i] - s1[i];
		}
		else 
			res = 0;
		return (res);
	}
}
