#include "main.h"
/**
 * _strcmp - compares a string
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: the diffrence
 */
int _strcmp(char *s1, char *s2)
{
	int diff, index;
       
	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		diff = s1[index] - s2[index];
		if (diff)
		{
			return (diff);
		}
		index++;
	}
	return (0);
}
