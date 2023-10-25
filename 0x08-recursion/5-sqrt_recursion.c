#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: void
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int
 * @vale: square root
 * Return: void
 */


int square(int n, int vale)
{

	if (vale * vale == n)
		return (vale);
	else if (vale * vale < n)
		return  (square(n, vale + 1));
	else
		return (-1);

}

