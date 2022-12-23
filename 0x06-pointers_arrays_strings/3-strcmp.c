#include "main.h"

/**
* _strcmp - compares the string pointed to,
* by s1 to the string pointed to by s2.
*
* @s1: first string to be compared.
* @s2: second string to be compared.
*
* Return: value < 0 then it indicates s1 is less than s2.
* value > 0 then it indicates s2 is less than s1.
* value = 0 then it indicates s1 is equal to s2.
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
