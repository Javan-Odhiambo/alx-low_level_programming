#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: string to be printed in reverse.
 * Return: void.
*/

void print_rev(char *s)
{
	int n = 0;

	while (*(s + n))
		n++;
	
	n--;
	while (n >= 0)
	{
		_putchar(*(s + n));
		n--;
	}

	_putchar('\n');
}
