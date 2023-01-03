#include "main.h"

/**
 * _strspn - gets number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: string
 * @accept: allowed characters.
 * Return: number of bytes.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;

	while (*(s + i))
	{
		int j = 0;

		while (*(accept + j))
		{
			if (*(accept + j) == *(s + i))
			{
				count++;
				break;
			}
			j++;
			if (*(accept + j) == '\0')
				return (count);
		}
		i++;
	}

	return (count);
}
