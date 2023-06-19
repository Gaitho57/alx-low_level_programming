#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination where to be copied
 * @src: source
 * @n: size in the area to copy
 *
 * Return: pointer to dest where it is to be copies
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
