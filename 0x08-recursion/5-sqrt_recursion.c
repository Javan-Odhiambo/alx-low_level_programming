#include "main.h"

/**
 * find_sqrt - finds the squareroot
 * @n: number to find squareroot of.
 * @i: number to compare squaroot with.
 * Return: squareroot of n.
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - finds the square root.
 * @n: number to get square root of.
 * Return: squareroot of n.
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(n, 2));
}