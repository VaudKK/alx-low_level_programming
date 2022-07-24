#include <stdio.h>
#include <stdlib.h>

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
	int product;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);

	return (0);
}
