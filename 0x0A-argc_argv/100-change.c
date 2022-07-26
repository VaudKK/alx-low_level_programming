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
	int amount;
	int cents;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	amount = (cents / 10) + (cents % 10);
	printf("%d\n", amount);


	return (0);
}
