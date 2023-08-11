#include <stdio.h>
#include "main.h"
#include <limits.h>
int main(void)
{

    int i = 0;
    int j = -1;
    //int x = NULL;
    int y = 5896;

    //printf("%b", i);
    _printf("%b", i);
    _printf("%b", j);
    _printf("%b", NULL);
    _printf("%b", y);

    return (0);
}