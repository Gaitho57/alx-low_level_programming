#include <stdio.h>
#include "main.h"

/**
 * flip_bits - counts the number of bits to convert from one
 * state to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index;
	int cnt = 0;
	unsigned long int present;
	unsigned long int exclusive = n ^ m;

	for (index = 63; index >= 0; index--)
	{
		present = exclusive >> index;
		if (present & 1)
			cnt++;
	}
	return (cnt);
}
