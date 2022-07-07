#include "main.h"
/**
 *print_times_table - Entry point, prints the n times table, starting with 0
 *@n:  is greater than 15 < 0
 *
 *
 */
void print_times_table(int n)
{
	int s = 0, inc, t;

	if (n < 0 || n > 15)
		return;
	while (s <= n)
	{
		for (t = 0; t <= n; t++)
		{
			inc = s * t;
			if (t == 0)
				_putchar('0' + inc);
			else if (inc < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + inc);
			}
			else if (inc < 100)
			{
				_putchar(' ');
				_putchar('0' + inc / 10);
				_putchar('0' + inc % 10);
			}
			else
			{
				_putchar('0' + inc / 100);
				_putchar('0' + (inc - 100) / 10);
				_putchar('0' + inc % 10);
				}
				if (t < n)
				{
				_putchar(',');
				_putchar(' ');
				}
				}
				_putchar('\n');
				s++;
				}
				}
