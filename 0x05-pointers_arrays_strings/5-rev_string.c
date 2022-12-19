#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 *
 * Return: void.
*/

void rev_string(char *s)
{
	int i, n = 0;
	char *copy;

	while (*(s + n))
		n++;

	copy = malloc(n * sizeof(char));

	for (i = 0; i < i; i++)
	{
		copy[i] = *(s + n);
		n--;
	}
}
