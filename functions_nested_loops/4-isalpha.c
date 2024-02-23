#include "main.h"

/**
 * _isalphint print_sign(int n);a - x
 * @c : x
 * Return: 0 or 1
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
