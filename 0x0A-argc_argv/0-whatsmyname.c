#include <stdio.h>

/**
 * main - prints name of project
 * @argc: num of argument
 * @argv: offset value
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

