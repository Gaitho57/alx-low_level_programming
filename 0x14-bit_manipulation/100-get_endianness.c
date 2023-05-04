#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks whether s machine is small or big edian
 * Return: 0 for big abd 1 for minute
 */
int get_endianness(void)
{
	unsigned int numb = 1;
	char *byte = (char *) &numb;

	return (*byte);
}
