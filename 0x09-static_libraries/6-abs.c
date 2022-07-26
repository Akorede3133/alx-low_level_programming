#include "main.h"

/**
 * _abs - prints absolute num
 * @n: parameter
 * Return: 0 always
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	else
		n = n;
	return (n);
}
