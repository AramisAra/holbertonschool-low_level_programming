#include <stdio.h>
/**
 * main - print "abc's" and "ABC's"
 * 
 * Return: 0
*/
int main(void)
{
    int abc;
    int ABC;
    /* This goes through 'a-z'*/
    for (abc = 'a'; abc <= 'z'; abc++)
        /* This print the chars*/
        putchar(abc);
    /* This goes through 'A-Z*/
    for (ABC = 'A'; ABC <= 'Z'; ABC++)
        /* This print the chars*/
        putchar(ABC);
    /* This print a newline*/
    putchar('\n');
    return (0);
}