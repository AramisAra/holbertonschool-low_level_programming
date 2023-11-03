#include "main.h"
/**
 * _strlen - returns the length of a string.
 *
 * @s: string.
 *
 * Return: the @s length.
 */

int _strlen(char *s)
{
	int i, x; /*WHILE index*/

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		x++;
		i++;
	}
	return (x);
}
