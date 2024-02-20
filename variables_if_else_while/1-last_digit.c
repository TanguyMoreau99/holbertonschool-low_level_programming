#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	printf("Last digit of");
	printf("%d", n);
	printf("is");
		if (digit > 5)
			printf("and is greater than 5");
		if (digit < 6)
			printf("and is less than 6 and not 0");
		if (digit == 0)
			printf("and is 0");

	return (0);
}
