#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: num args
 * @argv: array args
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, val = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		val *= atoi(argv[i]);
	}
	printf("%d\n", val);
	return (0);
}


