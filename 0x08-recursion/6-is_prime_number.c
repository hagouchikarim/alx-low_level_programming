#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Check if n is a prime number
 * @n: int
 * Return: 0 if true 1 if false
 */


int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - Check all number < n if they can divide it
 * @n: int
 * @i: int
 * Return: void
 */


int check_prime(int n, int i)
{

	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, i + 1));
}

