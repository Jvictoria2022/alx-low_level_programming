#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	long int l;
	long long int ll;
	float d;
	char c;

printf("Size of char:%lubyte(s)\n", sizeof(c));
printf("Size of int:%lubyte(s)\n", sizeof(i));
printf("Size of long int:%lubyte(s)\n", sizeof(l));
printf("Size of long long int:%lubyte(s)\n", sizeof(ll));
printf("Size of float:%lubyte(s)\n", sizeof(d));
return (0);
}
