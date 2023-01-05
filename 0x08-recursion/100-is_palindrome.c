#include "main.h"
#include <string.h>

/**
 * _palindrome - checks if a string is a palindrome
 * @s: pointer to string to be checked.
 * @start: pointer to the furthest left of the string.
 * @end: pointer to the furthest right of the string.
 * Return: 1 if palindrome else 0.
 */

int _palindrome(char *s, int start, int end)
{
	if (start < end)
	{
		if (s[start] != s[end])
			return (0);
		return (_palindrome(s, start + 1, end - 1));
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string to be checked
 * Return: 1 if palindrome else 0.
 */

int is_palindrome(char *s)
{

	int end = strlen(s) - 1;

	return (_palindrome(s, 0, end));

}
