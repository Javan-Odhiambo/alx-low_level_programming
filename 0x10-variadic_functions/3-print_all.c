#include "variadic_functions.h"

/**
 * print_char - function that prints a char given a va_list.
 * @args: The va_list from which the char to be printed is extracted.
 * Return: void
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - function that prints an int given a va_list.
 * @args: The va_list from which the int to be printed is extracted.
 * Return: void
*/
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - function that prints a float given a va_list.
 * @args: The va_list from which the float to be printed is extracted.
 * Return: void
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - function that prints a string given a va_list.
 * @args: The va_list from which the string to be printed is extracted.
 * Return: void
*/
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char*);

	if (!str)
		str = "(nill)";

	printf("%s", str);


}

/**
 * print_all - function that prints anything.
 * @format:  a string containting the data types of the remaining arguments
 * passed to the function
 * Return: void
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list args;
	char *separator = "";

	data_dict dict[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (dict[j].ch != NULL)
		{
			if (format[i] == *(dict[j].ch))
			{
				printf("%s", separator);
				dict[j].func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	putchar('\n');
	va_end(args);
}

