#include "main.h"
#include <stdlib.h>

/**
 * _print_rev_recursion - print string in reverse
 * @s: the string to be printed in reverse
 *
 */
void _print_rev_recursion(char *s)
{
	int len = 0;
	int i = 0;
	char *c = malloc(sizeof(char));

	while (s[len] != 0)
		len += 1;

	if (len == 1)
	{
		_putchar(*s);
		return;
	}

	_putchar(s[len - 1]);

	while (i < len - 1)
	{
		c[i] = s[i];
		i++;
	}


	_print_rev_recursion(c);
}
