#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>


/**
 * struct sp - structure that holds specifiers and their corresponing function
 * @spesifier: spesifier
 * @function: function pointer
 */
typedef struct sp
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
int _b(const char *format, va_list arg, int *pcount);

#endif /*MAIN_H*/
