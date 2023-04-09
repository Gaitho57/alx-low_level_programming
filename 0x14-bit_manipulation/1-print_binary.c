#include <stdio.h>
#include "main.h"

/**
 * print_binary -  prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
