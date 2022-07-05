#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *prints 10 times the alphabet, in lowercase, followed by a new line
 *
 *
 */
void print_alphabet_x10(void)
{
	char tAlpha;
	int product;

	for (tAlpha = 97; tAlpha = 122; tAlpha++)
		product = 10 * tAlpha;
	_putchar(tAlpha);

	_putchar('\n');
}
