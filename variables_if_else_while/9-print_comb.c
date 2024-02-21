#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print from 0 to 9
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)


	putchar(x);
		if (x < 9)

		putchar(44);
		putchar(32);



	putchar(10);

	return (0);
}
