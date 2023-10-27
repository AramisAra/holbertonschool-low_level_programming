#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * more headers goes there
 * 
 * main - Checking if the number is positive or negative
 * 
 * Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    /* This check if it less than 0 */
    if (n < 0)
    {
        /* It prints the var n with 'is negative' and a newline */
        printf("%d is negative\n", n);
    }
    /* This checks if it zero */
    else if (n == 0)
    {
        /* It print the var n with 'is zero' and a newline */
        printf("%d is zero\n", n);
    }
    /* Then if it doesn't pass the 2 first count then does this */
    else
    {
        /* It print the var n with 'is positive' and a newline */
        printf("%d is positive\n", n);
    }
	return (0);
}