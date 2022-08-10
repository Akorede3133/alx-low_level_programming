#ifndef 3_-_FUNCTION_LIKE_MACRO_H
#define 3_-_FUNCTION_LIKE_MACRO_H

/**
 * ABS - abs
 * @x: para
 * Return: int
 */
int ABS(x)
{
	if (x < 0)
	{
		x = -x;
	}
	else
	{
		x = x;
	}
	return (x);
}
#endif
