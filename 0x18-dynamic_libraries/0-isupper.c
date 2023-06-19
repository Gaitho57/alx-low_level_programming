#include "main.h"

/**
 * _isupper - looks for  uppercase
 * @c: parameter which is an integer
 *
 * Description: to check whether if upper case
 *
 * Return: 1 when upper, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
