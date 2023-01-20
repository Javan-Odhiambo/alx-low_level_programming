#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
