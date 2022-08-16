#include <stdio.h>
#ifndef FUNCTION_POINTERS_H
#define
/**
 * print_name - print name
 * @name: name
 * @f: func
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
#endif
