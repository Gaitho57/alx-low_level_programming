#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints an equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int cnt = 0;
	unsigned long int present;

	for (i = 63; i >= 0; i--)
	{
		present = n >> i;

			if (present & 1)
			{
				_putchar('1');
				cnt++;
			}
			else if (cnt)
					_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
