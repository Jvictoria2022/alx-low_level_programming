#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int h;
	long int j;
	long long int k;
	float m;
	char n;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(n));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(m));
return (0);
}
