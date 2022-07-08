#include "main.h"
/**
 *print_diagonals - draws a diagonal line on the terminal
 *@n: is the number of times the character \ should be printed
 *
 *Return: void
 */
void print_diagonals(int n)
{
	int y, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (y = 0; y < n; y++)
	{
		for (b = 0; b < y; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
