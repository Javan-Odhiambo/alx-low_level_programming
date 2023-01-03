#include "main.h"

/**
 * _memset - function fills the first n bytes of the location pointed to by s
 * with the constant byte b
 * @s: pointer to memory location.
 * @b: byte to be used to fill the spaces.
 * @n: number of bytes to fill.
 *
 * Return: pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *pS = s;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (pS);
}
