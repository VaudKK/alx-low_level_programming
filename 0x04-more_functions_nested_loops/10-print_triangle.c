#include "main.h"

/**
 * print_character - prints specified character
 * @n: the number of characters
 * @c: the character to be printed
 */
void print_character(int n, char c)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(c);
}


/**
 * print_triangle - prints a triangle
 * @size: the triangle size
 */
void print_triangle(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			print_character(size - (i + 1), ' ');
			print_character(i + 1, '#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}


