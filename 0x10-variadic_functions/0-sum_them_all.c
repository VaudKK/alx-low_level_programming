#include <stdarg.h>

/**
 * sum_them_all - sums all the numbers
 * @n: the number of numbers
 *
 * Return: numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum;

	sum = 0;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);
	return (sum);
}
