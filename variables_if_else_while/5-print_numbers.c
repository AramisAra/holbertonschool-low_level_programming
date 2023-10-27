#include <stdio.h>
/**
 * main - prints 0-9
 * 
 * Return: 0 always
*/
int main(void)
{
    int one;
    /* This goes through 0-9*/
    for (one = 0; one <= 9; one++)
        /* This prints the var 'one'*/
        printf("%d", one);
    /* This prints a newline*/
    printf("\n");
    return (0);
}