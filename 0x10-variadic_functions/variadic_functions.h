#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>

/**
 * struct format_handler - struct handles format and there callbacks
 *
 * @format: the format
 * @printer: callback
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;
typedef struct format_handler
{
	char format;
	void (*printer)(va_list *args_list);
} fh;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list *args);
void print_integer(va_list *args);
void print_float(va_list *args);
void print_string(va_list *args);

#endif
