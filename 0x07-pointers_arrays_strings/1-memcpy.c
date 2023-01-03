#include "main.h"

/**
 * _memcpy - n bytes from memory area src to memory area dest
 * @dest: pointer to destination.
 * @src: pointer of memory to be copied.
 * @n: number of bytes to be copied.
 *
 * Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
