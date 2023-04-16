#include <stdio.h>
void print_alphabet(void);
/**
 * main - entry
 * return: 0
 */
int main(void)
{
    print_alphabet();
    return 0;
}
void print_alphabet(void)
{
    for(int i='a'; i<='z'; i++)
    {
        putchar(i);
    }
    putchar('\n');
}