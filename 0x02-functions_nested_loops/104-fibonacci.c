#include <stdio.h>
/**
 * main - prints fibo
 * Return: 0 success
 */
int main(void)
{
	unsigned long int i, a, b, c;

	a = 0;
	b = 1;
	for (i = 0; i < 98; i++)
	{
		c = a + b;
		printf("%lu", c);
		if (i != 49)
		{
			printf("%c", ',');
			printf("%c", ' ');
		}
		a = b;
		b = c;
	}
	printf("%c", '\n');
	return (0);
}
