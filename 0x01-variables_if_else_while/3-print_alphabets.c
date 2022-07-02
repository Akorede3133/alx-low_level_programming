#include <stdio.h>
/**
 * main - print lower and upper
 * Return: 0 if successful
 */
int main(void)
{
	int c;

	c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
