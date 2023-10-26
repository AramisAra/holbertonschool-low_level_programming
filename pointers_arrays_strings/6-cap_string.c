#include "main.h"
/**
 * *cap_string - Capitalizes all words of a string
 * @s: String
 * Return: Fixed string
 */

char *cap_string(char *s)
{
	int i;
	int j;
	char s2[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;

		for (; s2[j] != '\0'; j++)
		{
			if (s[0] >= 'a' && 'z' >= s[0])
			{
				s[0] = s[0] - 32;
			}
			if (s[i] == s2[j])
			{
				if (s[i + 1] >= 'a' && 'z' >= s[i + 1])
				{
					s[i + 1] = (s[i + 1] - 32);
				}
			}
		}
	}
	return (s);
}
