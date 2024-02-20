#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the alphabet in one line
 *
 * Return: Always 0
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);

	putchar(10);
	return (0);
}
