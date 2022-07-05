#include "main.h"
/**
 * main - print _putchar
 * Return: 0 on success
 */

int main(void)
{
	char str[] = "_putchar";
	for (int i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
