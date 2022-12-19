/**
 * _puts - prints a string to stdout.
 * @str: string to be printed.
 *
 * Return: void.
*/

void _puts(char *str)
{	
	int n = 0;

	while (*(str + n) != '\0')
	{
		write(stdout, *(str + n), 1);
	}
	write(stdout, '\n', 1);
}
