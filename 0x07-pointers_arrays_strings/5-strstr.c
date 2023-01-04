#include "main.h"
#include <stddef.h>

/**
 * _strstr - looks for a given substring in a string.
 *
 *@haystack: string to be searched.
 *@needle: substring to be located.
 *Return: Pointer to first occurence of the substring on success.
 *Else returns NULL
*/

char *_strstr(char *haystack, char *needle){
	int i = 0, j = 0;

	while (*(haystack + i))
	{
		while (*(needle + j) && (*(haystack + i) == *needle))
		{
			if (*(haystack + (i + j)) == *(needle + j))
				j++;
			else
				break;
		}
		if (*(needle + j))
		{
			i++;
			j = 0;
		}
		else
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
