
/**
 * swap_int - swaps integers
 * @a: pointer to the first integer
 * @b: pinter to the secon integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
