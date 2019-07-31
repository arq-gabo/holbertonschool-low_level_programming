![Coggle Diagram of Functions](https://www.holbertonschool.com/holberton-logo.png)

# Project _printf();

## Our first project as software development students at holberton school

# Synopsis

## Header used
* "holberton.h"
* <stdlib.h>
* <stdio.h>
* <stdarg.h>

## Main function 

### int printf(const char * format,...)

## Current Conversion Specifiers
| Specifier | Description |
| --------  | ----------- |
| %c | writes a single character |
| %s | writes a character string |
| %% | writes the literal % |
| %d | writes the decimal form a signed integer |
| %i | writes the decimal form a signed integer |
| %u | writes the decimal form of an unsigned integer |
| %b | writes the binary form of an unsigned integer |
| %o | writes the octal form of an unsigned integer |
| %x | writes the hexadecimal form of an unsigned integer (using conversion letters: abcdef) |
| %X | writes the hexadecimal form of an unsigned integer (using conversion letters: ABCDEF) |
| %r | writes a character string in reverse order |
| %R | encodes a character string in rot13 format |
| %p | writes the character sequence defining a pointer |
| %S | writes non-printable characters in the format "\x(ASCII Code Value in UPPERCASE Hexadecimal)" |

## Functions

* **int _putchar(char c);**
> Writes the character c to stdout

* **int print_int(va_list var);**
> Is a function write an integers and decimals

* **int print_char(va_list var);**
> Is a function write just an character

* **int print_string(va_list var);**
> Is a function write a string

* **int print_dec(va_list var);**
> Is a function write the decimal form

* **int (get_op_func(char s))(va_list var);**
> It is a function that the structure data is equal to the arguments
