#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - the main function
 * @argc: the argument count
 * @argv: the argument values
 *
 * Return: 0 if success otherwise failed
 */
int main(int argc, char **argv)
{
	int a, b, rslt;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	op = argv[2][0];

	if (op != '+' && op != '-' && op != '/' && op != '*' && op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	rslt = (get_op_func(argv[2]))(a, b);
	printf("%d\n", rslt);

	return (0);
}
