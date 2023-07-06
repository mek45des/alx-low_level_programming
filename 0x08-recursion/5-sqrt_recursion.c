#include "main.h"
/**
 * power_operation - returns the natural square root of a number
 * @n: input number
 * @a: iteration
 * Return: square root of a number or -1
 */
int power_operation(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}
	return (0 + power_operation(n, a + 1));
}
/**
 * _sqrt_recursion - returns natural square root
 * @n: input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
