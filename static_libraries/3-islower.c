#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: Stores the ascii code of character to be checked
 * Return: 1 if c is lowercase, return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
