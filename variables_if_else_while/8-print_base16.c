#include <stdio.h>
/**
 * main - Prints the hexadecimal code
 * 
 * Return: (0)
*/
int main(void)
{
    int nums;
    int chars;

    /* This is going through the char '0-9'*/
    for (nums = '0'; nums <= '9'; nums++)
        /* This prints the var 'num'*/
        putchar(nums);
    /* This is going through the char 'a-f'*/
    for(chars = 'a'; chars <= 'f'; chars++)
        /* This prints the var 'char'*/
        putchar(chars);
    /* Last this prints a newline*/
    putchar('\n');
    return (0);
}