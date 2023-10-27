#include <stdio.h>
/**
 * main - Its print nums 0-9 with ', '
 * 
 * Return: Always 0
*/
int main(void)
{
    int num;
    /* This going through char '0-9'*/
    for (num = '0'; num <= '9'; num++)
    {
        /* Then it prints the var 'num'*/
        putchar(num);
        if (num != '9')
        {
            /* Then if the num var is not 9 it will print a space and coma*/
            putchar(',');
            putchar(' ');
        }   
    }
    /* After all that it prints a newline*/
    putchar('\n');
    return (0);
}