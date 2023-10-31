#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - It print to 98 from any number
 * @n: It the starting point number
*/
void print_to_98(int n)
{
    if (n < 98)
    {
        while (n < 98)
            printf("%d, ", n++);
        printf("%d\n", n);
    }
    if (n > 98)
    {
        while (n > 98)
            printf("%d, ", n--);
        printf("%d\n", n);
    }
}