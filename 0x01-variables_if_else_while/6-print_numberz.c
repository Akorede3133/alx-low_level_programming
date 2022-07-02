#include <stdio.h>
/**
 * main- Print numbers
 * Return: 0 success
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n % 10 + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
