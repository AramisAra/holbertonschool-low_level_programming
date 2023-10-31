#include "main.h"
/**
 * print_last_digit - print the last digit in a number
 * @n: It's the number where we get the last digit
*/
int print_last_digit(int n)
{
    /* These if are cut the number to their last digits
    and making sure they don't bring their signs*/
    if (n <= -10)
    {
        n = n % 10 * -1;
        _putchar(n + '0');
    }
    else if (n >= 10)
    {
        n = n % 10;
        _putchar(n + '0');
    }
    else 
    {
        n = n;
        _putchar(n + '0');
    }
    return (n);
}