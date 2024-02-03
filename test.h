#pragma once

#include <stdio.h>
#include <string.h>

#include "string21.h"

#define MAX_LEN 20
#define N_TESTS 4

void strncmp21_test(char *str1, char *str2, const int n);

void strtok21_test();
void memset21_test(char *str, char c, int n);

int randint();
char randchr();
char* randstr(char *str, size_t n);

void run_strncmp21_test();
void run_strtok21_test();
void run_memset21_test();