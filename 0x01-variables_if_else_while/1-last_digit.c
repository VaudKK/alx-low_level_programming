#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers go there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;
	int number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	number = last;

	if (number < 0)
		number *= -1;

	if (number > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (number == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (number < 6 && number > 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);

	return (0);
}
