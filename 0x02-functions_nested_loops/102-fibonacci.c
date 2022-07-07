#include <stdio.h>
/**
 * main - prints fibo
 * Return: 0 success
 */
int main(void)
{
	int i, a, b, c;

	a = 0;
	b = 1;
	printf("%d%c", a, ',');
	printf("%c", ' ');
	printf("%d%c", b, ',');
	printf("%c", ' ');
	for (i = 0; i <= 50; i++)
	{
		c = a + b;
		printf("%d", c);
		if (i != 50)
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
