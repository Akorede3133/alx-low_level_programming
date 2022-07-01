#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Check for positive or negative number
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("%d is negative\n", n);
	}
	else if(n == 0) {
		printf("%d is zero\n", n);
	}
	else {
		printf("%d is negative\n", n);
	}
	return (0);
}
