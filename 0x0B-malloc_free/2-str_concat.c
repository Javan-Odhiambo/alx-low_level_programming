#include "main.h"
#include <malloc.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string to be concatnated.
 * Return: pointer to the concatnated strings.
*/


char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int size;
	int i;
	int j;
	int s1_len = 0;
	int s2_len = 0;

	while (*(s1 + s1_len) != '\0')
		s1_len++;

	while (*(s2 + s2_len) != '\0')
		s2_len++;

	size = s1_len + s1_len + 1;

	str = (char *) malloc(sizeof(char) * size);

	if (str != NULL)
	{
		j = 0;
		for (i = 0; i < s1_len; i++)
		{
			*(str + j) = *(s1 + i);
			j++;
		}
		for (i = 0; i < s1_len; i++)
		{
			*(str + j) = *(s2 + i);
			j++;
		}
		*(str + j + 1) = '\0';
	}

	return (str);
}
