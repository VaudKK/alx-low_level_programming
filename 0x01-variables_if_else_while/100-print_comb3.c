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
	int j;
	int start = 49;

	for (i = 48; i <= 57; i++)
	{
		for (j = start; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}

		start += 1;
	}

	putchar('\n');

	return (0);
}
