#include "variadic_functions.h"

/**
 * print_strings - 
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}