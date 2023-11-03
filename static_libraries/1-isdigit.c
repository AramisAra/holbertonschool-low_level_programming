#include "main.h"
/**
 * _isdigit - checks if input is a digit (0 - 9).
 *
 * @c: input to be checked.
 *
 * Return: 1 if @c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	int rv; /*return value*/

	if (c >= 48 && c <= 57)
	{
		rv = 1;
	} else
	{
		rv = 0;
	}
	return (rv);
}
