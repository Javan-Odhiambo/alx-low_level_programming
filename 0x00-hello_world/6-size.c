#include<stdio.h>
/**
 * main - prints the size of data types on the computer it is run on.
 * Description: prints the size of data types on the computer it is run on.
 * Return: (0) when successful.
 */
int main(void)
{
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of a int: %li byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of a float: %li byte(s)\n", sizeof(float));
	return (0);
}

