#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers 0 to 9.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch = '0';

	for (; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
