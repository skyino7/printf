#include <stdio.h>
#include "main.h"
#include <limits.h>
int main(void)
{
    /*int len;
    int len2, sum = 0;*/
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

    /* int len;
    int len2;
    int sum;

    char *str = "More Info Authorized functions and macros write (man 2 write) malloc (man 3 malloc) free (man 3 free) va_start (man 3 va_start) va_end (man 3 va_end) va_copy (man 3 va_copy) va_arg (man 3 va_arg) Compilation Your code will be compiled this way: $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c As a consequence, be careful not to push any c file containing a main function in the root directory of your project.";
    
    unsigned int ui;
    void *addr; 

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0; 
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr); 
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    printf("\n");
    printf("\n");

    len = 200, len2 = 155;

    sum = 31000;

    _printf("Sum:[%d, %i]\n", sum, sum);
    printf("Sum:[%d, %i]\n", sum, sum);

    printf("\n");
    printf("\n");

    len = printf("Printf: %s\n",str);
    len2 = _printf("Printf: %s\n",str);

    printf("\n");
    printf("\n");

    printf("Length:[%d, %i]", len, len);
    printf("\n");
    _printf("Length:[%d, %i]", len2, len2);

    printf("\n");
    printf("\n");*/

    /* printf(NULL); */

    /*len = _printf("long: [%i], [%d]\n", 21474836499, -21474836498);
    len2 = printf("long: [%i], [%d]\n", 21474836499, -21474836498);

    _printf("Len:[%d]\n", len);
    printf("Len1:[%d]\n\n", len2);

    len, len2, sum = 555555555;

    _printf("Sum:[%d, %i]\n", sum, sum);
    printf("Sum:[%d, %i]\n", sum, sum);

    len = _printf("A %s sentence\n", "simple");
    len2 = printf("A %s sentence\n", "simple");
    printf("Len:[%d]\n", len);
    printf("Len1:[%d]\n\n", len2);
    
    len = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
    len2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
    printf("Len:[%d]\n", len);
    printf("Len1:[%d]\n\n", len2);

    len = _printf("A: A simple %v entence\n");
    len2 = printf("B: A simple %v entence\n");
    printf("Len:[%d]\n", len);
    printf("Len1:[%d]\n\n", len2);

    len = _printf("Percentage: %%\n");
    len2 = printf("Percentage: %%\n");
    printf("Len:[%d]\n", len);
    printf("Len1:[%d]\n\n", len2);*/

        printf("%d\n", 65176);
        _printf("%d\n", 65176);
        printf("%d\n", -777765176);
        _printf("%d\n", -777765176);
        printf("%d\n", 00002);
        _printf("%d\n", 00002);
        printf("%d\n", 0);
        _printf("%d\n", 0);
        printf("%d\n", 7);
        _printf("%d\n", 7);
        printf("%d\n", -2255445);
        _printf("%d\n", -2255445);
        printf("Maximum value of int: %d\n", INT_MAX);
        _printf("Maximum value of int: %d\n", INT_MAX);
        printf("Minimum value of int: %d\n", INT_MIN);
        _printf("Minimum value of int: %d\n", INT_MIN);
        printf("--------------------------------\n");
        printf("%i\n", 65176);
        _printf("%i\n", 65176);
        printf("%i\n", 0);
        _printf("%i\n", 0);
        printf("%i\n", -2255445);
        _printf("%i\n", -2255445);
        printf("Maximum value of int: %i\n", INT_MAX);
        _printf("Maximum value of int: %i\n", INT_MAX);
        printf("Minimum value of int: %i\n", INT_MIN);
        _printf("Minimum value of int: %i\n", INT_MIN);

    
    return (0);
}