#include "main.h"

/**
 * jack_bauer - prints time
 *
 */
void jack_bauer(void)
{
	int i;
	int j;

	int h1, h2, m1, m2;

	for (i = 0; i < 24; i++)
	{
		h1 = i / 10;
		h2 = i % 10;

		for (j = 0; j < 60; j++)
		{
			m1 = j / 10;
			m2 = j % 10;

			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
		}

	}
}
