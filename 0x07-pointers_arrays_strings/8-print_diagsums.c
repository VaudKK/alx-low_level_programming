#include <stdio.h>

/**
 * print_diagsums - print diagonal sums
 * @a: the square matrix
 * @size: the size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int lrsum = 0;
	int rlsum = 0;

	j = 0;

	for (i = 0; i < size; i++)
	{
		lrsum += a[i][j];
		j++;
	}

	j = 0;

	for (i = size - 1; i >= 0; i--)
	{
		rlsum += a[i][j];
		j++;
	}

	printf("%d, %d\n", lrsum, rlsum);
}
