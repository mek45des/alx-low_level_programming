#include "main.h"
/**
 * reverse_array - reverse content of an array of string
 * @a: array
 * @n: number of elements of an array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
