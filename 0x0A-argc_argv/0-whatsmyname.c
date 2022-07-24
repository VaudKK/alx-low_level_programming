#include <stdio.h>

/**
 * main - main method
 * @argc: argument count
 * @argv: arguments
 *
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
