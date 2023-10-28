#include <stdio.h>
/**
 * main - Prints Two 2 digit number
 * 
 * Return: Always 0
*/
int main(void)
{
    int Na, Nb;
    
    /* These 2 for loop are the incremite so it counts*/
    for (Na = 0; Na <= 99; Na++)
        for (Nb = Na + 1; Nb <= 99; Nb++)
        {
            /* This prints and the number with spaces*/
            putchar('0' + (Na / 10));
            putchar('0' + (Na % 10));
            putchar(' ');
            putchar('0' + (Nb / 10));
            putchar('0' + (Nb % 10));

            /* This if and put char are to make sure only print 
            ', ' in bewteen the number and not the end*/
            if (Na != 98 || Nb != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    /* This prints a newline*/
    putchar('\n');
    return (0);
}