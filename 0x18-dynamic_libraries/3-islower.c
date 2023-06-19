#include "main.h"

/**
 * _islower - looks for lowercase
 * @c: integer type  argument
 *
 * Description: lowercase test
 *
 * Return: 1 when lowercase
 * 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
