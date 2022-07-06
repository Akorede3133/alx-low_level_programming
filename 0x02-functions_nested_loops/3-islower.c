#include "main.h"

/**
 * _islower - checks for lower case letters
 * @c: the parameter to check
 * Return: 0 always
 */

int _islower(int c)
{
	int result;


	if (c >= 97 && c <= 122)
		result = 1;
	else
		result = 0;
	return (result);
}
