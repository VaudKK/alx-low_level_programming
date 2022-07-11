#include "main.h"

/**
 * puts_half- prints half a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, i, mid_point;

	len = 0;

	while (1)
	{
		if (*(str + len) == '\0')
		{
			break;
		}

		len++;
	}

	if (len % 2 != 0)
		mid_point = (len - 1) / 2;

	mid_point = len / 2;

	for (i = mid_point; i <= len - 1; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
