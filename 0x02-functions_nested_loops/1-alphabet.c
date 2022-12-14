#include "main.h"

/**
 * print_aphabet - Prints the alphabet.
 * Description: Prints the alphabet.
 * Return: void.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
