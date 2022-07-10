#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit of a radom number stored in the variable n
 * and if its > five, <six or zero
 *
 * Return: success always 0
 */
int main(void)
{
	int n, nlast;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nlast = n % 10;


	if (nlast > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, nlast);
	}
	else if (nlast == 0)
	{
	printf("last digit of %d is %d and is 0\n", n, nlast);
	}
	else if (nlast < 6 && nlast != 0)
	{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, nlast);
	}
	return (0);
}

