/**
 * swap_int - swaps the values of two integers.
 * @a: integert to be swaped.
 * @b: integer to be swaped.
 *
 * Return: Void.
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
