#include "main.h"
/**
 *times_table - Entry point
 *@void: prints the 9 times table, starting with 0
 *
 *
 */
void times_table(void)
{
	int ranNum, mTable, prodt;

	for (ranNum = 0; ranNum <= 9; ranNum++)
	{
	_putchar ('0');
	for (mTable = 1; mTable <= 9; mTable++)
	{
	_putchar(',');
	_putchar(' ');
	prodt = ranNum * mTable;
	if (prodt <= 9)
	_putchar(' ');
	else
	_putchar((prodt / 10) + '0');
	_putchar((prodt % 10) + '0');
	}
	_putchar('\n');
	}
}
