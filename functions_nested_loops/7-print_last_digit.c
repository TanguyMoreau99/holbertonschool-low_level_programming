#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - x
 * @n : x
 * Return: n
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit * -1

	_putchar('0' + lastdigit);
	return (lastdigit);
}
