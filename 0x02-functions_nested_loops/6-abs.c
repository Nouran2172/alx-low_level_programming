#include "main.h"

/**
 * _abs - function that computes the absolute
 *		value of an integer
 *
 * @n: takes an integer type input fir function
 *
 * Return: always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
