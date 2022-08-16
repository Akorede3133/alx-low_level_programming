#include "function_pointers.h"
/**
 * print_name - print name
 * @name: name
 * @f: func
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
