#include "main.h"

/**
* _strncpy -  copies up to n characters from the string pointed to,
* by src to dest.
* In a case where the length of src is less than that of n,
* the remainder of dest will be padded with null bytes.
*
* @dest: pointer to the destination array where the content is to be copied.
* @src: the string to be copied.
* @n: number of characters to be copied.
*
* Return: pointer to the copied string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (*(src + i))
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
	}


	return (dest);
