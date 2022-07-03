#include <stdio.h>
/**
 * main -  prints all the numbers of base 16 in lowercase
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int digit;
	char lower;

	for (digit = 0; digit < 10; digit++)
	putchar((digit % 10)+0);
	for (lower = 'a'; lower <= 'f'; lower++)
	putchar(lower);
	putchar('\n');
	return (0);
}

