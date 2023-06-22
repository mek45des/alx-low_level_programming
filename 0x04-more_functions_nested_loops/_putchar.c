#include <unistd.h>

/**
 * _putchar - writes the chracter c to stdout
 * @c: the character to print
 *
 * Return: on Success 1
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
