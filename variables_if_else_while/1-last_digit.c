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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of");
	printf("%d", n);
	printf("is");
		if (n % 10 > 5)
			printf("and is greater than 5");

		else
			if (n % 10 < 5)
				printf("and is less than 6 and not 0");

			else
				printf("and is 0");
	return (0);
}