#include "main.h"

/**
 * puts_half- prints half a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (1)
	{
		if (*(str + len) == '\0')
		{
			break;
		}

		len++;
	}

	for (i = len / 2; i <= len - 1; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
