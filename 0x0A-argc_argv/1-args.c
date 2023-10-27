#include <stdio.h>

/**
 * main - prints the num of args passed into it.
 * @argc: num args
 * @argv: array args
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}

