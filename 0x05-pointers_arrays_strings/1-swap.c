#include "main.h"

/**
 * swap_int - swap integers
 * @a: para one
 * @b: para two
 */

void swap_int(int *a, int *b)
{
	int t = *a;


	*a = *b;
	*b = t;
}
