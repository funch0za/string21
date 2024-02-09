#include "my_random.h"

int randint(int d) {
  int result = 1;
  if (d != 0) {
    result = rand() % d;
  }
  return result;
}

char randchr() {
  char result = '!' + rand() % 93;

  if (result == '\\') {
    result = 'a';
  }
  if (result == '"') {
    result = 'b';
  }

  return result;
}

char *randstr(char *str, size_t size) {
  for (size_t i = 0; i < size; ++i) {
    str[i] = randchr();
  }
  str[size] = '\0';
  return str;
}

char *randdelim(char *delim, char *str, size_t size_delim, size_t size_str) {
  for (size_t i = 0; i < size_delim; ++i) {
    delim[i] = str[randint(size_str)];
  }
  delim[size_delim] = '\0';

  return delim;
}