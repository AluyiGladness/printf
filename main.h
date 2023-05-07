#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);
void print_integer(int value, int base, int *length);
void print_mychar(char value, int* length);
void print_mystring(char *value, int *length)

#endif

