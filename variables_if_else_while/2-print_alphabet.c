#include <stdio.h>
/**
 * main - print the 'abc'
 * 
 * Return: to 0
*/
int main(void)
{
    int abc;
    /* This goes thought the letter 'a-z'*/
    for (abc = 'a'; abc <= 'z'; abc++)
        /* This print the char*/
        putchar(abc);
    /* This put a newline at the end*/
    putchar('\n');
    return(0);
}