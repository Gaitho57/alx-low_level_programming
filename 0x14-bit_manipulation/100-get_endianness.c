#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks of a machine is small or big endian
 * Return: 0 for big and 1 for little
 */
int get_endianness(void)
{
	unsigned int numb = 1;
	char *byte = (char *) &numb;

	return (*byte);
}
