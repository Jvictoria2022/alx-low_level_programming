#include "main.h"
/**
 * _is lower - checks for a lowercase character
 *@c: the character to be checked
 *
 *Return: 1 if char in lowercase, o otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
