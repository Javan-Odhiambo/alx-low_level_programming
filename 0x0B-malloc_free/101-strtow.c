#include "main.h"
#include <malloc.h>
/**
 * wCounter - counts the number of words in a string
 * @s: string to count
 * Return: int of number of words
 */
int wCounter(char *s)
{
	int i, nWords = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				nWords++;
		}
		else if (i == 0)
			nWords++;
	}
	nWords++;
	return (nWords);
}
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, l, nWords = 0, wc = 0;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	nWords = wCounter(str);
	if (nWords == 1)
		return (NULL);
	arr = (char **)malloc(nWords * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr[nWords - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			arr[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (arr[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(arr[k]);
				free(arr[nWords - 1]);
				free(arr);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				arr[wc][l] = str[i + l];
			arr[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (arr);
}
