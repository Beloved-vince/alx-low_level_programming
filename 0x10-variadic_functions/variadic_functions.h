#ifndef VAR_FUNC
#define VAR_FUNC
#include <stdlib.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *seperator, const unsigned int n, ...);

void print_strings(const char *seperator, const unsigned int n, ...);

void print_all(const char * const format, ...);


#endif
