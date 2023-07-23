#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* structure that holds specifiers and their corresponing function*/
typedef struct
{
    char spesifier;
    void (*function)(const char *format, va_list arg, int *pcount);
} sp;

int _printf(const char *format, ...);
int _putchar(char c);
void _string(const char *format, va_list arg, int *pcount);
void _char(const char *format, va_list arg, int *pcount);
void _integer(const char *format, va_list arg, int *pcount);
void _module(const char *format, va_list arg, int *pcount);

#endif /*MAIN_H*/
