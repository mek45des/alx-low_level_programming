#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Empty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[24] = "abcdfghijklmnoprstuvwxyz";
	int y;

	for (y = 0; y < 24; y++)
	{
		putchar(s[y]);
	}
	putchar('\n');
	return (0);
}
