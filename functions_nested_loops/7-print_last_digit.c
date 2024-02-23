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

	_putchar(lastdigit);
	return (lastdigit);
}
