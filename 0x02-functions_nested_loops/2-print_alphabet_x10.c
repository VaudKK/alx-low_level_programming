#include "main.h"

/**
 * print_alphabet - prints alphabets
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < (97 + 25); j++)
			_putchar(j);

		_putchar('\n');
	}
}
