#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers go there */

/**
 * positive_or_negative - checks if a number is positive or negative
 * @n: the number
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
