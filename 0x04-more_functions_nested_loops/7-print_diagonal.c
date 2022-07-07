#include "main.h"

/**
 * print_spaces - prints white spaces
 * @s: the number of spaces
 */
void print_spaces(int s)
{
	int i;

	for (i = 0; i < s; i++)
		_putchar(' ');
}


/**
 * print_diagonal - prints diagonals
 * @n: the number of diagonals
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			print_spaces(i);
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}


