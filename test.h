#pragma once

#include "my_random.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "string21.h"

#define MAX_LEN 30
#define N_TESTS 4

void strncmp21_test(char *str1, char *str2, const int n);
void strtok21_test(char *str, char *delim);
void memset21_test(char *str, size_t size, char c, int n);

void run_strncmp21_test();
void run_strtok21_test();
void run_memset21_test();