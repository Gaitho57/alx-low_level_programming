#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of given bit to 0
 * @n: pointer to the number to switch
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (((unsigned int)index) > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
