#include <stdio.h>
/**
 * main - prints fibo
 * Return: 0 success
 */
int main(void)
{
	long int i, a, b, c;

	a = 0;
	b = 1;
	printf("%ld%c", a, ',');
	printf("%c", ' ');
	printf("%ld%c", b, ',');
	printf("%c", ' ');
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%ld", c);
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
