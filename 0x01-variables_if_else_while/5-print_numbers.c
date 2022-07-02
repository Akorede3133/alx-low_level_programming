#include <stdio.h>
/**
 * main- print base 10 numbers
 * Return: 0 when successful
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
