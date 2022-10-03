#include "main.h"

/**
 * _puts - print string to the console
 * @str: string to be printed
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (1)
	{
		if (*(str + i) == '\0')
		{
			break;
		}

		_putchar(*(str + i));

		i++;
	}

	_putchar('\n');
}
