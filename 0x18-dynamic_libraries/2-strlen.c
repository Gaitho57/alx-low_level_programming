#include "main.h"

/**
 * _strlen - estimates the length of a string
 * @s: character parameter
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count = count + 1;
	}
	return (count);
}
