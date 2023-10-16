#include "main.h"
/**
 * swap_int - swap the values of integers
 * @a: pointer a
 * @b: pointer b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}

