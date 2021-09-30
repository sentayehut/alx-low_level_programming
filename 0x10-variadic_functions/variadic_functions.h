#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);


}	

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list *args);
void print_integer(va_list *args);
void print_float(va_list *args);
void print_string(va_list *args);

#endif
