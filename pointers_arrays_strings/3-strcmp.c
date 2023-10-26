#include "main.h"
/**
 * _strcmp - compare two strings
 *
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] && s2[i]; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
