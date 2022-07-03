#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 * printed in ascending order,considered as the same combination of the numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3, num4, num5, num6;

	for (num5 = 0; num5 < 100; num5++)
	{
	num1 = num5 / 10;
	num2 = num5 % 10;
	for (num6 = 0; num6 < 100; num6++)
	{
	num3 = num6 / 10;
	num4 = num6 % 10;
	if (num1 < num3 || (num1 == num3 && num2 < num4))
	{
	putchar(num1 + '0');
	putchar(num2 + '0');
	putchar(32);
	putchar(num3 + '0');
	putchar(num4 + '0');
	{
	putchar(44);
	putchar(32);
	}
	}
	}
	}
	putchar(10);
	return (0);
}
