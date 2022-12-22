include "main.h"

/**
 * _strcat -  appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 * @dest: string.
 * @src: string.
 *
 * Return: pointer to the resulting string.
*/

char *_strcat(char *dest, char *src)
{
	int ls = 0, ld = 0, i;
	char results[100];

	while (*(dest + ld))
		ld++;
	
	while (*(src + ls))
		ls++;

	for (i = 0; i < ld; i++)
		results[i] = *(dest + i);

	for (i = 0; i < ls; i++)
		results[ld + i] = *(src + i);
	
	return (results);
}
