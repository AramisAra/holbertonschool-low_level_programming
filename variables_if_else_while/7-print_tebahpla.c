#include <stdio.h>
/**
 * main - print the alphabet in rev
 * 
 * Return: 0 always
*/
int main(void)
{
    int cba;
    /* This going in reverse from z-a*/
    for (cba = 'z'; cba >= 'a'; cba--)
        /* This prints var 'cba'*/
        putchar(cba);
    /* Then this prints a newline*/
    putchar('\n');
    return (0);
}