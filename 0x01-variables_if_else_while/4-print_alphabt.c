#include <stdio.h>
/**
 *main - prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
	if ((y != 'e') && (y != 'q'))
	{
	putchar(y);
	}
	}
	putchar('\n');
	return (0);
}
