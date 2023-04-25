#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct vartype - struct vartype
 * @vartype: type of variable to be printed
 * @f: function associated
 */
typedef struct vartype
{
	char *vartype;
	int(*f)(va_list);
} var_t;
int _printf(const char *format, ...);
int _putchar(char c);
int c_func(va_list args);
int s_func(va_list args);
int perc_func(va_list args);
int aux(int arg);
int printf_digit(va_list list);

#endif
