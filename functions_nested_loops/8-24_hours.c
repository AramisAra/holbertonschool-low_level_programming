#include "main.h"
/**
 * jack_bauer - prints a 24 hour clock all at once
*/
void jack_bauer(void)
{
    int hou, min;

    /* This is basiclly the same process of the last bonus of the variables
    project.*/
    for (hou = 0; hou < 24; hou++)
    {
        for (min = 0; min < 60; min++)
        {
            _putchar('0' + (hou / 10));
            _putchar('0' + (hou % 10));
            _putchar(':');
            _putchar('0' + (min / 10));
            _putchar('0' + (min % 10));
            _putchar('\n');
        }
    }
}