#include "main.h"

/**
 * _abs - computes absolute value
 * of an intiger
 *
 * @i: input number as an intiger
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
