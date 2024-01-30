#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
    return 0;
}
// To get the warning: gcc -O -Wall -W -pedantic -ansi -std=c89 -o main main.c
// No warning: gcc -O -Wall -W -pedantic -ansi -std=c99 -o main main.c