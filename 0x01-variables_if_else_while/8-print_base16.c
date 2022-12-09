#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the hexidecimal numbers in lowercase.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch = '0';

	for (; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	ch = 'a';
	for (; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
