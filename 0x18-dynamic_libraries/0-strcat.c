#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: where string is added
 * @src: string to be concatenated
 *
 * Return:pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int count, length1, length2, i;

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
	i = 0;
	while (i <= length2)
	{
		dest[length1 + i] = src[i];
		i++;
	}
	return (dest);
}
