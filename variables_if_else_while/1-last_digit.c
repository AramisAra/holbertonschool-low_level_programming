#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	/* It's check if the last digit is larger than 5 */
	if (d > 5)
	{
		/* Then it print the digit and the last digit */
		printf("Last digit of %i is %i and is greater than 5\n", n, d);
	}
	/* It's check if the last digit is equal to 0 */
	else if (d == 0)
	{
		/* Then it print the digit and the last digit */
		printf("Last digit of %i is %i and is 0\n", n, d);
	}
	/* It's does this if it doesn't pass the first 2 checks */
	else
	{
		/* Then it print the digit and the last digit */
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, d);
	}
	return (0);
}