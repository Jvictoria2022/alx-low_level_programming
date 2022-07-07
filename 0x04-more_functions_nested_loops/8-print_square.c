#include "main.h"
/**
 *print_square - prints out square
 *@size: square shape
 *
 *Return: void
 */
void print_square(int size)
{
	int y, b;

	if (size <= 0)
		_putchar('\n');
	for (y = 0; y < size; y++)
	{
		for (b = 0; b < (size); b++)
		{

		_putchar('#');
	}
	_putchar('\n');
	}
}
