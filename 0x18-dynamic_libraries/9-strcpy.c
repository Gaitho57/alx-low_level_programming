#include "main.h"

/**
 * _strcpy - copy string to other variable
 * @dest: variable to be copied in
 * @src: origin of string
 *
 * Return: address of the destination
 */
char *_strcpy(char *dest, char *src)
{
	int count, length;

	/* length of string */
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	length = count;
	/* copy the string */
	for (count = 0; count <= length; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
