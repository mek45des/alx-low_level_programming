#include "main.h"
/**
 * _isupper - cheks if the parammetr is upercase character
 * @c: input character
 * Return: 1 if it's uppercase character, 0 in another
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
