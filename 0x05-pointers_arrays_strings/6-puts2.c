#include "main.h"

/**
 * puts2 - print every other string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int len;

	len = 0;

	while (1)
	{
		if (*(str + len) == '\0')
		{
			break;
		}

		if (len % 2 == 0)
		{
			_putchar(*(str + len));
		}

		len++;
	}

	_putchar('\n');
}
