#include "main.h"

/**
 * more_numbers - print numbers 0 to 14
 *
 */
void more_numbers(void)
{
	int i, j, tens;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				tens = j / 10;
				_putchar(tens + '0');
			}

			_putchar((j % 10) + '0');
		}

		_putchar('\n');
	}
}
