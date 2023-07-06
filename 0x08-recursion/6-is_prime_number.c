#include "main.h"
/**
 * prime - observe if the input is prime number
 * @n: input number
 * @c: iteration
 * Return: 1 if the input is prime
 * other wise 0
 */
int prime(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, c + 1));
}
/**
 * is_prime_number - observe if the input is prime number
 * @n: input number
 * Return: 1 if th input is prime other wise 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
