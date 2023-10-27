#include <stdio.h>
/**
 * main - print the "abc's" but without q&e
 * 
 * Return: Always 0
 */
int main(void)
{
	int abc;
    /* This goes through a-z*/
	for (abc = 'a'; abc <= 'z'; abc++)
        /* This say if abc is q and e don't print them*/
		if (abc != 'q' && abc != 'e')
            /* This prints the var 'abc'*/
			putchar(abc);
    /* This prints a newline*/
    putchar('\n');
	return (0);
}
