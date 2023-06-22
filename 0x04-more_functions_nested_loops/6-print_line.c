#include "main.h"
/**
 * print_line - draws strate line in the terminal
 * @n: times strate line printed
 * Return: no return
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
