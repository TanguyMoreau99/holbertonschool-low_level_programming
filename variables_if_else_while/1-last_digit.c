#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determine if the last digit of n is > 5, zero or < 6
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = (n % 10);
	printf("Last digit of %d is ", n);
	printf("%d ", lastdigit);

	if (lastdigit > 5)
		printf("and is greater than 5\n");
	else
		if (lastdigit == 0)
			printf("and is 0\n");
		else
			printf("and is less than 6 and not 0\n");
	return (0);
}
