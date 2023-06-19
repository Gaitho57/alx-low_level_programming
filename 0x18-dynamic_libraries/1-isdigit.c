#include "main.h"

/**
 * _isdigit - checks the digit
 * @c: a parameter which is of integer datatype
 *
 * Description: verifieswhether  it's a digit
 *
 * Return: 1 on success, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
