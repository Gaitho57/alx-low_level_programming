#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: whre to be copied
 * @src: string to be copied
 * @n: number of bytes to copy
 *
 * Return: a pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	int index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
