#include <stdio.h>
/**
 * main- possible combo
 * Return: 0 success
 */
int main(void)
{
	int n;

	n = 0;
	while(n <= 9)
	{
		putchar(n % 10 + '0');
		n++;
		putchar(',');
		putchar(' ');
		
	}
	putchar('\n');
	return (0);
}
