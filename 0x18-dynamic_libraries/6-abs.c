#include "main.h"

/**
 * _abs - computes the absolute value
 * @n: integer type parameter
 *
 * Description: finds the absolute value
 *
 * Return: the value
 */
int _abs(int n)
{
	int b;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		b = (-1) * n;
		return (b);
	}
}
