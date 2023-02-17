#include <stdio.h>
/**
 * main = Entry point
 * Return: always 0 (success)
 */
int main(void)
{
printf("Size of a char: %li byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %li byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %li byte(s)\n",(unsigned long) sizeof(long int));
printf("Size of a long long: %li byte(s)\n",(unsigned long)sizeof(long long int));
printf("Size of a float: %li byte(s)", (unsigned long)sizeof(float));
return (0);
}
