#include<stdio.h>
/**
 * main - Prints a string to standard error
 * Description: Prints the string below
 * "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
 * Return: (1)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long int size = sizeof(str) / sizeof(str[0]) - 1;

	fwrite(str, size, 1, stderr);
	return (1);
}

