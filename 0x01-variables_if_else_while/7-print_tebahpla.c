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

	for (i = 122; i >= 97; i--)
		putchar(i);

	printf("\n");

	return (0);
}
