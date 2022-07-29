#include <stdlib.h>

/**
 * array_range - create an array
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int size, i, j;
	int *nums;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	nums = (int *)malloc(size * sizeof(int));

	if (nums ==  NULL)
		return (NULL);

	j = 0;

	for (i = min; i <= max; i++)
	{
		nums[j] = i;
		j++;
	}

	return  (nums);
}
