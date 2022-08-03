
/**
 * int_index - search for int
 * @array: the array to search from
 * @size: the size of the array
 * @cmp: function pointer
 *
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
