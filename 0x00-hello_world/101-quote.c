#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main- Prints and that art is useful
 * Return: 0  if successful
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = strlen(str);


	write(2, str, length);
	return (1);
}
