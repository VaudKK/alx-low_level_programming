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
	int product = 0;
	int i, rslt;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		rslt = atoi(argv[i]);

		if (rslt == 0)
		{
			printf("%s\n", "Error");
			return (1);
		}

		product += rslt;
	}

	printf("%d\n", product);

	return (0);
}
