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
		fwrite((str + n), 1, 1, stdout);
	}
	fwrite('\n', 1, 1, stdout);
}
