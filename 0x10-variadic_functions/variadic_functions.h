#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>

/**
 * struct printer - struct defining a printer
 * @symbol: symbol representing datatype
 * @print: function pointer
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

}printer_t;

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
