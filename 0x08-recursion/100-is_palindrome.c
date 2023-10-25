#include "main.h"

/**
 * last_index - Returns the last index of a string (counts the null char)
 * @s: Pointer the string
 * Return: int
 */

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: str
 * Return: void
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - Checker for the palindrome
 * @s: String
 * @start: int
 * @end: int
 * @pair: int
 * Return: void
 */


int check(char *s, int start, int end, int pair)
{

	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, pair));
}

