#include <stdio.h>
#include "main.h"
#include <limits.h>
int main(void)
{
 
    /* char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
    int len;
    int len2;
    
    int i = _printf("12345%    s %%%%%%%%%%%%%%%%%%%", "12345");
    _printf(" %d\n", i);

    int j = printf("12345%    s %%%%%%%%%%%%%%%%%%%", "12345");
    printf(" %d\n", j);

    _printf("%s", "");
    printf("%s\n", "");

    _printf(" %s", "");
    printf(" %s\n", "");

    _printf("%s ", "");
    printf("%s \n", "");

    _printf(" %s ", "");
    printf(" %s \n", "");

    _printf("2 %s ", "-");
    printf("2 %s \n", "-");

    printf("3 %s %s ", "", "-");
    _printf("3 %s %s \n", "", "-");

    _printf("4 %s %s ", " - ", "");
    printf("4 %s %s \n", " - ", "");

    _printf("5 %s %s %s %s %s", " - ", "", "4", "", s2);
    printf("5 %s %s %s %s %s\n", " - ", "", "4", "", s2);

    _printf("6 %s %s %s %s %s ", " - ", "", "4", "", "2 ");
    printf("6 %s %s %s %s %s \n", " - ", "", "4", "", "2 ");

    _printf(" NULL %s NULL ", NULL);
    printf(" NULL %s NULL \n", NULL); */

    /* len = _printf("123456\n");
    len2 = printf("123456\n");

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2); */

    int len;
    int len2;
    int sum;
    /* unsigned int ui;
    void *addr; */

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    /* ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0; */
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    /* _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); */
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    /* _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr); */
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    printf("\n");
    printf("\n");

    len = 2, len2 = 5;

    sum = len + len2;

    _printf("Sum:[%d, %i]\n", sum, sum);
    printf("Sum:[%d, %i]\n", sum, sum);

    printf("\n");
    printf("\n");

    len = _printf("long: [%i], [%d]\n", -4545439394949595, -4545439394949595);
    /* len2 = printf("long: [%i], [%d]\n", -4545439394949595, -45454393949); */
    
    return (0);
}