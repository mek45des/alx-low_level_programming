#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	cr = malloc(sizeof(c) * size);

	if (cr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;
	return (cr);
}
