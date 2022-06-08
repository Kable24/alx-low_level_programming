#include "main.h"
/**
 *print_alphabet - prints the alphabet
 * Return: 0 always (success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');

}
