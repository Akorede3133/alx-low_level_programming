#include <stdio.h>
/**
 * main- Print reverse
 * Return: 0 success
 */
int main(void)
{
	int c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
