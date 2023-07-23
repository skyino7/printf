#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* structure that holds specifiers and their corresponing function*/
typedef struct
{
    char spesifier;
    void (*function)(char *format, va_list arg, int *pcount);
} sp;

int _printf(const char *format, ...);
int _putchar(char c);
void _string(char *format, va_list arg, int *pcount);
void _char(char *format, va_list arg, int *pcount);
void _integer(char *format, va_list arg, int *pcount);

#endif /*MAIN_H*/
