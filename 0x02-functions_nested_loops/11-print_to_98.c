#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: para
 * Return: 0 always
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf("%c%c", ',', ' ');
		}
		printf("%c",'\n');
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf("%c%c", ',', ' ');
		}
		printf("%c", '\n');
