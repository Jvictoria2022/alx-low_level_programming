#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: success always 0
 */
int main(void)
{
	char y;

	for (y = 'a'; y = 'z'; y++)
	putchar (y);
	for (y = 'A'; y = 'Z'; y++)
	putchar (y);
	return (0);
}

