#include "main.h"

/**
 * print_rev - print string to int reverse
 * @str: string to be printed
 */
void print_rev(char *str)
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

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
