#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: String containing the binary number
 *
 * Return: the conerted number
 */

unsigned int binary_to_uint(const char *b)
{
int index;
unsigned int decimal_val = 0;

if (!b)
return (0);

for (index = 0; b[index]; index++)
{
if (b[index] < '0' || b[index] > '1')
return (0);
decimal_val = (decimal_val << 1) + (b[index] - '0');
}
return (decimal_val);
}

