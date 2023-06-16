#include <stdio.h>

/**
 * main - Empty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
