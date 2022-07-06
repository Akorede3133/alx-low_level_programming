#include "main.h"

/**
 * int_isalpha - checks for alphabets
 * @c: paramter to check
 * Return: 0 on succes
 */

int _isalpha(int c)
{
	int result;


	if (c <= 122 && c>= 65)
		result = 1;
	else
		result = 0;
	return (result);
}
