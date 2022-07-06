#include "main.h"

/**
 * is_lower - checks for lower case letters
 * Return: 0 always
 */

int _islower(int c)
{
	int result;


	if (c >= 97 && c <= 122)
		result = 1;
	else
		result = 0;
	return result;
}
