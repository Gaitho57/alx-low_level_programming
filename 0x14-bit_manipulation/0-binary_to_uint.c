#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: String containing the binary number
 *
 * Return:An unsigned int the conerted number
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int decimal_val = 0;

	if(!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (o);
		decimal_val = 2 * decimal_val + (b[index] - '0');
	}
	return(decimal_val);
}
