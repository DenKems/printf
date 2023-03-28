#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define F_MINUS
#define BUFF_SIZE 1024
#define UNUSED(x) (void)(x)

int _printf(const char *format, ...);
int (*check_specifier(const char*))(va_list);

/**
* struct func - This is the struct for specifier
* @t: character to determine which specifier function to use
* @f: pointer to the function determined
*/
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int print_char(va_list);
int print_percent(va_list);
int print_string(va_list list, char buffer[],
        int flags, int width, int precision, int size);

#endif
