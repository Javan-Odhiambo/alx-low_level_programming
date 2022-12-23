#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase.
*
* @s: first string to be converted.
*
* Return: value < 0 then it indicates s1 is less than s2.
* value > 0 then it indicates s2 is less than s1.
* value = 0 then it indicates s1 is equal to s2.
*/

char *string_toupper(char *s)
{
	while (s)
	{
		if (s >= 'a' && s <= 'z')
			s -= 32;
		s++;
	}


}
