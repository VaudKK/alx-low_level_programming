#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds
 * @a: param
 * @b: param
 * Return: sum
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub
 * @a: fn
 * @b: sn
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul
 * @a: fn
 * @b: sn
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: fn
 * @b: sn
 *
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - moe
 * @a: fn
 * @b: sn
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
