#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: parameter
 * Return: 0 always
 */


int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (result < 0)
		result = -result;
	else
	{
		result = result;
	}
	_putchar(result % 10 + '0');
	return result;
}
