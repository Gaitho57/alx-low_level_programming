#include "main.h"

/**
 * _strstr - finds a substring
 * @haystack: sring to search
 * @needle: the substring
 *
 * Return: beginning of the located substring
 * otherwise null
 */
char *_strstr(char *haystack, char *needle)
{
	int index, k;

	for (index = 0; haystack[index] != '\0'; index++)
	{
		for (k  = 0; needle[k] != '\0';)
		{
			if (needle[k] == haystack[index + k])
				k++;
			else
				break;
		}
		if (needle[k] == '\0')
			return (haystack + index);
	}
	return (NULL);
}
