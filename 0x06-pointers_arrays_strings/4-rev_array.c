#include <stdlib.h>
/**
 * reverse_array - reverse an array
 * @a: the array to reverse
 * @n: the size of the array
 */
void reverse_array(int *a, int n)
{
	int *reversed = malloc(sizeof(int));
	int i, j;

	j = n;

	for (i = 0; i < n; i++)
	{
		reversed[i] = a[j - 1];
		j--;
	}

	for (i = 0; i < n; i++)
	{
		a[i] = reversed[i];
	}
}

