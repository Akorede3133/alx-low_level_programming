#include <stdio.h>
/**
 * main- print with prefix
 * Return: 0 success
 */
int main(void)
{
	int n;

	n = 1;
	while (n <=89)
	{
		if (n <= 9)
		{
			putchar('0');
		}

		putchar(n % 10 + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
