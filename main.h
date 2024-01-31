#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_digit(long n, int base);
int print_string(char *str);
int print_format(char specifier, va_list args_ptr);
int print_hexa(long n, int base);
int print_octal(long n, int base);
int print_memory_address(void *ptr);
int print_special_string(const char *str);
#endif

