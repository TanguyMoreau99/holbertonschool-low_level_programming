#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int x;
	int t;

	for (t = 1; t <= 10; t++)

		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);

	_putchar(10);

}
