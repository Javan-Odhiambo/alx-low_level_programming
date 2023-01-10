#include "main.h"
#include <malloc.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: Number of arguments.
 * @av: pointer to arguments.
 * Return: pointer to entire string on success else NULL.
*/


char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int pos;
	int size = ac + 1;
	char *str;

	for (i = 0; i < ac; i++)
	{
		size += strlen(av[i]);
	}

	str = (char *) malloc(sizeof(char) * size);

	if (str != NULL)
	{
		pos = 0;
		for (i = 0; i < ac; i++)
		{
			j = 0;
			while (*(*(av + i) + j) != '\0')
			{
				str[pos] = *(*(av + i) + j);
				pos++;
				j++;
			}
			str[pos] = '\n';
			pos++;
		}
	str[size] = '\0';
	}

	if (ac == 0 || av == NULL)
		str = NULL;

	return (str);
}
