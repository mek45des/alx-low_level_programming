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
	char a[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(a[i]);
	}
	putchar ('\n');
	return (0);
}
