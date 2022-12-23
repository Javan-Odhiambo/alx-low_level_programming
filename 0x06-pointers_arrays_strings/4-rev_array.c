#include "main.h"

/**
* reverse_array -  reverses the content of an array of integers.
*
* @a: ponter to array.
* @n: number of elements in array.
*
* Return: Void
*/

void reverse_array(int *a, int n)
{
	int temp, i = 0;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

		i++;
		n--;
	}

}
