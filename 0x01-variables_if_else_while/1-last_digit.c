#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit of the number stored in the variable
 *
 * Return: success always 0
 */
int main(void)
{
	double n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n * 2.5) > 5)
	{
	printf("last digit of %lf is %lf and is greater than 5", n, n * 2.5);
	}
	else if ((n * 2.5) < 6 && (n * 2.5) != 0)
	{
	printf("last digit of %lf is %lf and is less than 6 and not 0", n, n * 2.5);
	}
	else
	{
	printf("last digit of %lf is %lf and is 0", n, n * 2.5);
	}
	return (0);
}
