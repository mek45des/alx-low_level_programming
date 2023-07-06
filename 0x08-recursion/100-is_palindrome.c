#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparing - compares the character in a string
 * @s: string
 * @i1: smallest iterator
 * @i2: bigger iterator
 * Return: .
 */
int comparing(char *s, int i1, int i2)
{
	if ((*s + i1) == *(s + i2))
	{
		if (i1 == i2 || i1 == i2 + 1)
			return (1);
		return (0 + comparing(s, i1 + 1, i2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - returns 1 if a string is palindrome
 * @s: input string
 * Return: 1 if  a string is palindrome 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparing(s, 0, _strlen_recursion(s) - 1));
}
