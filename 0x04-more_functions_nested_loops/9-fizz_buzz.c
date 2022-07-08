#include <stdio.h>
/**
 * main - print fizzbuzz
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			if (i != 100)
				printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			if (i != 100)
				printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
				printf(" ");
		}
		else
		{
			printf("%d", i);
			if (i != 100)
				printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
