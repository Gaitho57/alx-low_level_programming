#include "main.h"

/**
 * _puts - prints output of a string
 * @s: character type parameter
 *
 * Return: void return value
 */
void _puts(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}
