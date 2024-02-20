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
	char t;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (t = 'A'; t <= 'Z'; t++)
		putchar(t)
	putchar(10);
	return (0);
}
