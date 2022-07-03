#include <stdio.h>
#include <string.h>
/* more headers go there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= (97 + 25); i++)
		putchar(i);

	for (i = 65; i <= (65 + 25); i++)
		putchar(i);

	printf("\n");

	return (0);
}
