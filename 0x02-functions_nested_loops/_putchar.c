#include "main.h"
#include <unistd.h>
/**
 * -putchar - writes the character c to stdout
 *  @c: the charachter to print
 *
 *  Return: on Success 1
 *  on error, -1 is returned, and errno is set appropriatly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
