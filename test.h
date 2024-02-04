#pragma once

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#include "string21.h"

#define MAX_LEN 100
#define N_TESTS 4

void strncmp21_test(char *str1, char *str2, const int n);
void strtok21_test(char str[MAX_LEN], char delim[MAX_LEN]);
void memset21_test(char *str, size_t size, char c, int n);

int randint(int d);
char randchr();
char *randstr(char *str, size_t size);
char *randdelim(char *delim, char *str, size_t size_delim, size_t size_str);

void run_strncmp21_test();
void run_strtok21_test();
void run_memset21_test();