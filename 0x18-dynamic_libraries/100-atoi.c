#include "main.h"

/**
 * _atoi - chanes string to integer
 * @s: string to be converted
 *
 * Return: an int type value, result
 */
int _atoi(char *s)
{
	int count, sign, result, check;
	unsigned int num;

	count = 0;
	sign = 1;
	num = 0;
	while (s[count] != '\0')
	{
		if (s[count] == '-')
		{
			sign = -sign;
		}
		else if (s[count] >= '0' && s[count] <= '9')
		{
			num = num * 10 + (s[count] - '0');
			check = count + 1;
			if (s[check] < '0' || s[check] > '9')
			{
				break;
			}
		}
		count++;
	}
	result = num * sign;
	return (result);
}
