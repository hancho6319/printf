#ifndef _MAIN_H_
#define _MAIN_H_

int _printf(const char *format, ...);
int (*check_specifier(char*))(va_list);

/**
 * struct func - struct for spacifier to printer
 * @t: character to compare
 * @f: function to handle peinting
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

#endif
