#include "main.h"

/**
 * _memset - adds memory with constant values
 * @s: points to char params
 * @b: constant byte type
 * @n: byte of memory area
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
