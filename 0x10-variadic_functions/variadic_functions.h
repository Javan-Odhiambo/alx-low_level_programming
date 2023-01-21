#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdarg.h>

/**
 * struct data_function - struct that holds the characters and it's functions.
 * @ch: The character associated with a data type i.e -
 * c for char,
 * i for int,
 * f for float,
 * s for char *,
 * @func: the function that prints the given data type.
 */
struct data_function
{
	char *ch;
	void (*func)(va_list);
};
typedef struct data_function data_dict;


int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
