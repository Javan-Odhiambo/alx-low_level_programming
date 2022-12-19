#include <stdio.h>
/**
 * _puts - prints a string to stdout.
 * @str: string to be printed.
 *
 * Return: void.
*/

void _puts(char *str)
{	
	int n = 0;

	while (*(str + n) != '\0')
	{
		fwrite(1, *(str + n), 1);
	}
	fwrite(1, '\n', 1);
}
