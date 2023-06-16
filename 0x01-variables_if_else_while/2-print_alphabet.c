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
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(a[n]);
	}
	putchar('\n');
	return (0);
}

