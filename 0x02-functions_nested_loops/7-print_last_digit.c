#include "main.h"
/**
 *print_last_digit - Entry point
 *@p: that prints the last digit of a number.
 *
 *Return: the last digit
 */
int print_last_digit(int p)
{
	int last_digit = p % 10;


	if (last_digit < 0)
	last digit * = -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
