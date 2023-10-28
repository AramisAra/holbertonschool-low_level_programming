#include <stdio.h>
/**
 * main - Print 2 digit numbers
 * 
 * Return: Always 0
*/
int main(void)
{
    int numa, numb;
    /* The 2 for loop are the number going up a digit*/
    for (numa = 0; numa < 10; numa++)
    {
        for (numb = numa + 1; numb < 10; numb++)
        {
            /* The if is to put the ', ' while it not the end*/
            if (numa != 10 && numb != 10)
            {
                putchar(',');
                putchar(' ');
            }
            /* This prints the numbers*/
            putchar(numa + '0');
            putchar(numb + '0');
        }
    }
    /* This prints a newline at the end*/
    putchar('\n');
    return (0);
}