#include "string21.h"

void *memset21(void *str, int c, size_t n) {
  for (unsigned char *cp = str; n > 0; ++cp, --n) {
    *cp = c;
  }
  return str;
}