#include <unistd.h>

/**
 * -putchar - writes the character c to stdout
 *  @c: the charachter to print
 *
 *  Return: on Success 1
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);

}
