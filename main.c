#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    int sum;

    long int n = 52589745687458;
    long int d = 9739355992;
    int num = 0;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    sum = len + len2;

    num = d + n;

    _printf("Adding: %d\n", num);
    printf("Adding: %d\n", num);

    _printf("Sum is %d\n", sum);
    printf("Sum is %d\n", sum);

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    
    return (0);
}