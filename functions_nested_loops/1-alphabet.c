#include "main.h"
#include "main.c"

/**
 * main - print alphabet
 *
 * Return: On success 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x >= 'z'; x++)
		_putchar(x);

	_putchar(10);

	return (0);
}
