#include <stdio.h>
/**
 * main - prints the 3 digits number
 * 
 * Return: Always 0
*/
int main(void)
{
    int Na, Nb, Nc;

    /* These 3 for loop are increasing the number in order*/
    for (Na = 0; Na < 10; Na++)
    {
        for (Nb = Na + 1; Nb < 10; Nb++)
        {
            for (Nc = Nb + 1; Nc < 10; Nc++)
            {
                /* These if are to tell the program when to the number and ', '*/
                if (Na != Nb && Na != Nc && Nb != Nc)
                {
                    putchar(Na + '0');
                    putchar(Nb + '0');
                    putchar(Nc + '0');
                }
                if (Na != 7)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    /* This print a newline*/
    putchar('\n');
    return (0);
}