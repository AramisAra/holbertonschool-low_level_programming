#include "main.h"
/**
 * _isupper - checks if a character is uppercase or not.
 *
 * @c: letter to be checked.
 *
 * Return: 1 if @c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	int rv; /*return value*/

	if (c >= 65 && c <= 90)
	{
		rv = 1;
	} else
	{
		rv = 0;
	}
	return (rv);
}
