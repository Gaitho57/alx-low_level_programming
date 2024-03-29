#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets bit at a certain index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to adjust to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if ((index & ~63U) != 0)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
