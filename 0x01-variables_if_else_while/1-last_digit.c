#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program will assign a random number to the variable n
 * each time it is executed.
 * It then checks if it is less than, equal to, or greater than 5.
 * It finally print the number and if it is less than, equal to,
 * or greater than 5.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, l);
	else if (l == 0)
		printf("Last digit of %i is %i and is 0\n", n, l);
	else if (l < 6 && l != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l);
	return (0);
}
