#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch = 97;

	for (; ch < 123; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
