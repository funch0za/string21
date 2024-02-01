#include "string21.h"

int strncmp21(const char *str1, const char *str2, size_t n) {
  int result;
  size_t i;

  result = i = 0;
  while (str1[i] != '\0' && str2[i] != '\0' && result == 0 && i < n) {
    result = str1[i] - str2[i];
    ++i;
  }

  return result;
}