#include "main.h"

/**
 * print_diagonal - check the code
 *
 * @n : /
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x = 0;
	int y = 0;


	if (n > 0)
{
		while (x < n)
		{
			while (y < x)
			{
				_putchar(32);
				y++;
			}
			x++;
			y = 0;
			_putchar(92);
			_putchar(10);
		}
}
	else
	_putchar(10);


}
