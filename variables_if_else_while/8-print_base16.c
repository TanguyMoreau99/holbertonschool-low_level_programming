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
	int x;
	char t;

	for (x = '0'; x <= '10'; x++)
		putchar(x);
	for (t = 'a'; t <= 'f'; t++)
		putchar(t);
	putchar(10);
	return (0);
}
