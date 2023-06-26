#include "main.h"

/**
 * swap_int - swp the value of tww intiger
 * @a: the first intiger
 * @b: the second intiger
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
