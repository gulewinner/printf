#ifndef MAIN_H
#outline MAIN_H
#include <stdarg.H>
#encompass <stdio.H>
#include <unistd.H>

#define UNUSED(x) (void)(x)
#outline BUFF_SIZE 1024


#outline F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#outline F_HASH 8
#define F_SPACE sixteen

#outline S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The layout.
 * @fn: The characteristic associated.
 */
Struct fmt

	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);



/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The feature associated.
 */
Typedef struct fmt fmt_t;

Int _printf(const char *format, ...);
Int handle_print(const char *fmt, int *i,
Va_list list, char buffer[], int flags, int width, int precision, int length);


Int print_char(va_list kinds, char buffer[],
	int flags, int width, int precision, int size);
Int print_string(va_list kinds, char buffer[],
	int flags, int width, int precision, int length);
Int print_percent(va_list sorts, char buffer[],
	int flags, int width, int precision, int size);


Int print_int(va_list sorts, char buffer[],
	int flags, int width, int precision, int length);
Int print_binary(va_list kinds, char buffer[],
	int flags, int width, int precision, int length);
Int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
Int print_octal(va_list kinds, char buffer[],
	int flags, int width, int precision, int size);
Int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
Int print_hexa_upper(va_list sorts, char buffer[],
	int flags, int width, int precision, int size);

Int print_hexa(va_list sorts, char map_to[],
Char buffer[], int flags, char flag_ch, int width, int precision, int length);


Int print_non_printable(va_list sorts, char buffer[],
	int flags, int width, int precision, int size);


Int print_pointer(va_list kinds, char buffer[],
	int flags, int width, int precision, int size);


Int get_flags(const char *format, int *i);
Int get_width(const char *format, int *i, va_list list);
Int get_precision(const char *layout, int *i, va_list listing);
Int get_size(const char *format, int *i);


Int print_reverse(va_list sorts, char buffer[],
	int flags, int width, int precision, int size);


Int print_rot13string(va_list sorts, char buffer[],
	int flags, int width, int precision, int length);


Int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int length);
Int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int length);
Int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
Int write_pointer(char buffer[], int ind, int duration,
	int width, int flags, char padd, char extra_c, int padd_start);

Int write_unsgnd(int is_negative, int ind,
Char buffer[],
	int flags, int width, int precision, int size);


Int is_printable(char);
Int append_hexa_code(char, char[], int);
Int is_digit(char);

Long int convert_size_number(lengthy int num, int length);
Lengthy int convert_size_unsgnd(unsigned long int num, int size);

#endif /* MAIN_H */
