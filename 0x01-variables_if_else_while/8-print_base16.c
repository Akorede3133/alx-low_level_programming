#include <stdio.h>
/**
 * main- print hex
 * Return: 0 success
 */
int main(void)
{
	int n, c;

	n = 0;
	while (n <=9)
	{
		putchar(n % 10 + '0');
		n++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
