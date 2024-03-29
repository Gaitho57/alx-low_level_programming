#include <stdio.h>
#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: String that contains the binary number
 *
 * Return: the changed number
 */
unsigned int binary_to_unit(const char *b)
{
	int index;
	unsigned int decimal_val = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] <  '0' || b[index] > '1')
		return (0);
	decimal_val = 2 * decimal_val + (b[index] - '0');
}
return (decimal_val);
}
