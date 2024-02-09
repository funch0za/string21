#pragma once
#include <stdlib.h>

int randint(int d);
char randchr();
char *randstr(char *str, size_t size);
char *randdelim(char *delim, char *str, size_t size_delim, size_t size_str);