#include "main.h"

/**
 * reverse_array - rev array
 * @a: array
 * @n: num
 */

void reverse_array(int *a, int n)
{
	int i, temp;


	for (i = 0; i < n / 2; i++)
	{
		temp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = temp;
	}
}
