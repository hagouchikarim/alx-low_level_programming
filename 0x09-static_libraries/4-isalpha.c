#include "main.h"

/**
 * _isalpha - check if character is an alphabetic character.
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}

