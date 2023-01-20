#include "variadic_functions.h"

/**
 * sum_them_all - sums it's parameters
 * @n: number of arguments
 * Description: Uses stdarg to sum up it's parameters.
 * Return:The sum if arguments else 0
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	return (sum);
}

