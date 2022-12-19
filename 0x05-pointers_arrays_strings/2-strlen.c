/**
 * _strlen - returns the length of a string.
 * @s: string who's length is to be determined.
 *
 * Return: the length of the string as an integer.
*/
int _strlen(char *s)
{
	int n = 0;
	while(*(s + n) != '\0')
	{
		n++;
	}
	return (n);
}
