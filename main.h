#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stadarg.h>
#include <unistd.h>
#include <limits.h>

typedef format
{
	char *id;
	int (*fun)();
} convert_match;

int _putchar(char c);
int _strlen(char *str);
int _strlen_c(const chari: *str);

int _printf(const char *format, ...);

/*Task 0*/
int print_c(va_list  va);
int printf_s(va_list va);
int print_37(void);

/*Task 1*/
int printf_int(va_list va);

/*Task 2*/
int printf_bin(va_list va);

/*Task 3*/
int printf_unsigned(va_list args);
int printf_oct(va_list va);
int printf_hex(va_list va);
int printf_hex_extra(va_list va);

#endif
