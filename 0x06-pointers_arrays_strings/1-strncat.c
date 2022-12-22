#include "main.h"

/**
 * _strncat -  appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 * @dest: string.
 * @src: string.
 * @n: number of bytes to be copied.
 *
 * Return: pointer to the resulting string.
*/

char *_strncat(char *dest, char *src, int n)
{
	int ls = 0, ld = 0, i;

	while (*(dest + ld))
		ld++;

	while (*(src + ls))
		ls++;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + ld + i) = *(src + i);

	return (dest);
}
