#include <stdio.h>
#include <string.h>

#include "string21.h"

#define MAX_LEN 1000
#define N_TESTS 4

void strncmp21_test(const char str1[N_TESTS][MAX_LEN],
                    const char str2[N_TESTS][MAX_LEN], const int n[N_TESTS]);
void strtok21_test();
void memset21_test(const char str1[N_TESTS][MAX_LEN], const char c[N_TESTS], const int n[N_TESTS]);