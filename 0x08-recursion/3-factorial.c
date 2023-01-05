#include "main.h"

/**
 * factorial - returns a factorial of a given number
 * @n: number to get factorial of.
 * Return: factorial of the number n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}