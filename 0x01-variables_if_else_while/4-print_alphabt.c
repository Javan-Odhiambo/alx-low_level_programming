#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase execpt e and q.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
