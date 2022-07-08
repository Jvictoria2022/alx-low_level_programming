#include "main.h"
/**
 *print_triangle - Entry point,prints a triangular shape
 *@size: of a triangl
 *
 *Return: void
 */
void print_triangle(int size)
{
	int row, lashes, gaps;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (gaps = size - row; gaps >= 1; gaps--)
			{
				_putchar(' ');
			}

				for (lashes = 1; lashes <= row; lashes++)
				{
					_putchar('*');
				}
				_putchar('\n');
		}
}	}
