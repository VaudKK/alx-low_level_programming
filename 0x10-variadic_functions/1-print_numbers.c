#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - prints numbers
 * @separator: the separator
 * @n: the number of arguments
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = n;
	va_list numbers;
	unsigned int i = 0;

	va_start(numbers, n);

	for (i = 0; i < count; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(numbers, int));
		}
		else
		{
			if (i == count - 1)
			{
				printf("%d", va_arg(numbers, int));
			}
			else
			{
				printf("%d%s", va_arg(numbers, int), separator);
			}
		}
	}

	printf("\n");
}
