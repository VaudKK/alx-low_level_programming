#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - prints strings
 * @separator: the separator
 * @n: the number of arguments
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = n;
	va_list strings;
	unsigned int i = 0;
	char *value;

	va_start(strings, n);

	for (i = 0; i < count; i++)
	{
		value = va_arg(strings, char *);

		if (value == NULL)
		{
			value = "(nil)";
		}

		if (separator == NULL)
		{
			printf("%s", value);
		}
		else
		{
			if (i == count - 1)
			{
				printf("%s", value);
			}
			else
			{
				printf("%s%s", value, separator);
			}
		}
	}

	printf("\n");
}
