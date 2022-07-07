#include <stdio.h>
/**
 * main - prints fibo
 * Return: 0 success
 */
int main(void)
{
	long int i, a, b, c, sum;

	a = 0;
	b = 1;
	sum = 0;
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		if (c < 4000000 && c % 2 == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
