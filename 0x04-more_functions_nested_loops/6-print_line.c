#include "main.h"
/**
 *print_line - prints lines
 *@n: numerous times
 *
 *Return: void
 */
void print_line(int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
