#include "main.h"
/**
 * print_number - prints an intiger
 * @n: input intiger
 * Return: no return
 */
void print_number(int n)
{
	unsigned int s, d, count;

	if (n < 0)
	{
		_putchar(45);
		s = n * -1;
	}
	else
	{
		s = n;
	}

	d = s;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((s / count) % 10) + 48);
	}
}
