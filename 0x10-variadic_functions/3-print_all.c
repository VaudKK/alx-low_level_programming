#include <stdarg.h>
#include <stdio.h>


/**
 * print_string - helper function
 * @value: the string to print
 *
 */
void print_string(char *value)
{
	while (value != NULL)
	{
		printf("%s", value);
		return;
	}

	printf("%s", "(nil)");
}

/**
 * print_all - prints all characters
 * @format: the format of the characters
 *
 *
 */
void print_all(const char * const format, ...)
{
	va_list values;
	int i = 0;
	char *forstrings;
	int valid = 0;

	va_start(values, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(values, int));
				valid = 1;
				break;
			case 'i':
				printf("%d", va_arg(values, int));
				valid = 1;
				break;
			case 'f':
				printf("%f", va_arg(values, double));
				valid = 1;
				break;
			case 's':
				forstrings = va_arg(values, char *);
				print_string(forstrings);
				valid = 1;
				break;
			default:
				valid = 0;
				break;
		}

		if (valid == 1 && format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
