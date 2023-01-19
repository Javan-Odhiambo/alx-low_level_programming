#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * return: void
*/
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*op_f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_f = get_op_func(argv[2]);
	if (op_f != NULL)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);

		if (num2 == 0 && (strcmp(argv[2], "/") || strcmp(argv[2], "%")))
		{
			printf("Error\n");
			exit(100);
		}

		result = op_f(num1, num2);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}
