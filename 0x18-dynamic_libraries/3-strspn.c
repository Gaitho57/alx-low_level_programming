#include "main.h"

/**
 * _strspn - acquires the length of prefix substring
 * @s: string to observe
 * @accept: matching characters
 *
 * Return: initial segment bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int index = 0, k;

	while (s[index] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[index] == accept[k])
			{
				len++;
				break;
			}
			k++;
		}
		/* end program if mismatch */
		if (s[index] != accept[k])
			break;
		index++;
	}
	return (len);
}
