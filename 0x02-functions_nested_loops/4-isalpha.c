#include "main.h"

/**
 * _isalpha - Check if character is an alphabetic character.
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
