#include "main.h"
#include <string.h>

/**
 * _palindrome - checks if a string is a palindrome
 * @s: pointer to string to be checked.
 * @left: pointer to the furthest left of the string.
 * @right: pointer to the furthest right of the string.
 * Return: 1 if palindrome else 0.
 */

int _palindrome(char *s, int left, int right)
{
	if (left < right)
	{
		if (s[left] != s[right])
			return (0);
		return (_palindrome(s, left++, right--));

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
