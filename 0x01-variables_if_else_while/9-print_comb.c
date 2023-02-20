#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print comb of numbers'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
