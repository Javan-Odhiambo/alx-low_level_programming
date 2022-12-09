#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible different
 * combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch1, ch2, ch3;

	for (ch1 = 48; ch1 <= 57; ch1++)
	{
		for (ch2 = ch1 + 1; ch2 <= 57; ch2++)
		{
			for (ch3 = ch2 + 1; ch3 <= 57; ch3++)
			{
				putchar(ch1);
				putchar(ch2);
				putchar(ch3);
				if ((ch1 + ch2 + ch3) != 168)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
