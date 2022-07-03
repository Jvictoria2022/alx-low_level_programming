#include <stdio.h>
/**
 * main -  prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char small;

	for (small = 'z'; small >= 'a'; small--)
	putchar(small);
	putchar('\n');
	return (0);
}
