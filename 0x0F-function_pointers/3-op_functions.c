#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Addition
 * @a: sum 1
 * @b: sum 2
 * Return: result of add
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction
 * @a: min
 * @b: sus
 * Return: result of subst
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication
 * @a: mult 1
 * @b: mult 2
 * Return: result of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division
 * @a: divs 1
 * @b: divis2
 * Return: result of div
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - Modulo
 * @a: mod 1
 * @b: mod 2
 * Return: result of modulo
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}

