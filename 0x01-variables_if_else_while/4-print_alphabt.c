#include <stdio.h>
/**
 * main - print without q and e
 * Return: 0 always success
 */
int main(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' || c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
