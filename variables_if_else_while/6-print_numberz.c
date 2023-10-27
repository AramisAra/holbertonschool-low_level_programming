#include <stdio.h>
/**
 * main - print the number 0-9
 * 
 * Return: 0 always
*/
int main(void)
{
    int num;
    /* This goes through 0-9 then*/
    for (num = '0'; num <= '9'; num++)
        /*Its print the var 'num*/
        putchar(num);
    /* This prints the newline*/
    putchar('\n');
    return (0);
}