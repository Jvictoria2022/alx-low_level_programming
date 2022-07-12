#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int e, f, g;
	char *a, aux;

	a = s;

	while (s[f] != '\0')
	{
		f++;
	}

	for (g = 1; g < f; g++)
	{
		a++;
	}

	for (e = 0; e < (f / 2); e++)
	{
		aux = s[e];
		s[e] = *a;
		*a = aux;
		a--;
	}
}
