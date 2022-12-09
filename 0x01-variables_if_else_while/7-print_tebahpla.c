#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch = 'z';

	for (; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
