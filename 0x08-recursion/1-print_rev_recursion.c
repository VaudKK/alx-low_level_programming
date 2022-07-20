#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _print_rev_recursion - print string in reverse
 * @s: the string to be printed in reverse
 *
 */
void _print_rev_recursion(char *s)
{
	int len = 0;
	char *dest = malloc(sizeof(char));

	len = strlen(s);

	if (len == 1)
	{
		_putchar(*s);
		return;
	}

	_putchar(s[len - 1]);

	strncpy(dest,s,len - 1);

	_print_rev_recursion(dest);
}
