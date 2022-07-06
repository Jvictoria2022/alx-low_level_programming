#include "main.h"
/**
 *times_table - Entry point
 *@void: prints the 9 times table, starting with 0
 *
 *
 */
void times_table(void)
{
	int ran, tab, prod;

	for (ran = 0; ran < 10; ran++)
	{
		for (tab = 0; tab < 10; tab++)
		{
			prod = tab * ran;
			if (tab == 0)
			{
				_putchar(prod + '0');
			}
			if (prod < 10 && tab != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else if (prod >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
		_putchar('\n');
		}
	}
}

