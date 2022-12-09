#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lower case and upper case.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	ch = 'A';
	for (; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
