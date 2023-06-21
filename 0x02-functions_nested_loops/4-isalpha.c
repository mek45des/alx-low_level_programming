#include "main.h"
/**
 * _isalpha - shows 1 if the input is a
 * letter another case,shows 0
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for letters, 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
