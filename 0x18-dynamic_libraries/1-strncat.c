#include "main.h"
/**
 * _strncat - concatenates n bytes of string
 * @dest: string destination
 * @src: string added
 * @n: number bytes
 *
 * Return: ponter to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count, length1, length2, index;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	length1 = count;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	length2 = count;
	index = 0;
	while (index <= length2)
	{
		if (index < n)
		{
			dest[length1 + index] = src[i];
		}
		index++;
	}
	return (dest);
}
