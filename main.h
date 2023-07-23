#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* structure that holds specifiers and their corresponing function*/
typedef struct
{
    char spesifier;
    int (*function)(const char *format, va_list arg, int *pcount);
} sp;

int _printf(const char *format, ...);
int _putchar(char c);
int _string(const char *format, va_list arg, int *pcount);
int _char(const char *format, va_list arg, int *pcount);
int _integer(const char *format, va_list arg, int *pcount);
int _module(const char *format, va_list arg, int *pcount);

#endif /*MAIN_H*/
