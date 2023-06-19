#include "main.h"

/**
 * _strchr - finds a character in a string
 * @s: address of string to find
 * @c: character to check
 *
 * Return: pointer to the first appearance
 * otherwie NULL
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			return (s + index);
		}
		index++;
	}
	if (c == '\0')
		return (s + index);
	return (NULL);
}
