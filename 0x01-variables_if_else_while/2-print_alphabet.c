#include <stdio.h>
/**
 * main - prints alphabets
 * Return: 0 if successful
 */
int main(void)
{
	int c;
	

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c++;
	}
	return (0);
}
