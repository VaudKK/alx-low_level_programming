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
	char copy[10000];
	int len = strlen(s) - 1;

	if (len == 0)
	{
		_putchar(*s);
		return;
	}

	_putchar(s[len]);

	strcpy(copy, s);

	copy[len] = '\0'; 

	_print_rev_recursion(copy);
}
