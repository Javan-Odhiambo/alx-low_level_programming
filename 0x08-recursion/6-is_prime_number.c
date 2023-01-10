#include "main.h"

/**
 * is_prime - check if a number n is prime
 * @n: number to be checked.
 * @i: for 0 - n/2.
 * Return: 1 if prime else 0
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - calls is_prime to check if a number is a prime number.
 * @n: number to be checked.
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, 2));
}
