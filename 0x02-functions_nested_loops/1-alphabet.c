#include "main.h"
/**
 *print_alphabet - Entry point
 * prints the alphabet, in lowercase, followed by a new line
 *
 *
 */
void print_alphabet(void)
{
	char sletter;

		for (sletter = 97; sletter <= 122; sletter++)
			_putchar(sletter);

	_putchar('\n');
}
