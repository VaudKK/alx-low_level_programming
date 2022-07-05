#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char words[] = "_putchar";
	unsigned int i;

	for (i = 0; i < sizeof(words) - 1; i++)
		_putchar(words[i]);

	_putchar('\n');

	return (0);
}
