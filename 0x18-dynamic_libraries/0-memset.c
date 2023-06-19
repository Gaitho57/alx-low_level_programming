#include "main.h"

/**
 * _memset - adds constant byte to memory
 * @s: memory location
 * @b: byte to fill
 * @n: size to be filled
 *
 * Return: pointer to the memory area s is returned
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	/* fill memory of size n with byte b */
	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
