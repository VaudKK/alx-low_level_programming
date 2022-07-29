#include <stdlib.h>
#include <stdio.h>


/**
 * main - the main function
 * @argc: argument count
 * @argv: argument count
 * Return: integer
 */
int main(int argc, char *argv[])
{
	long int num1, num2, sum;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		exit(98);
	}

	sum = num1 * num2;

	printf("%ld\n", sum);

	return (0);
}
