#include "test.h"
#include <stdlib.h>
#include <string.h>

int main() {
  srand(time(NULL));

#ifdef TEST_STRNCMP
  run_strncmp21_test();
#endif

#ifdef TEST_STRTOK
  run_strtok21_test();
#endif

#ifdef TEST_MEMSET
  run_memset21_test();
#endif

  return 0;
}

void strncmp21_test(char *str1, char *str2, int n) {
  int result, result21;
  result = strncmp(str1, str2, n);
  result21 = strncmp21(str1, str2, n);
  printf("str1: %s\nstr2: %s\nn: %d\n", str1, str2, n);
  printf("strncmp result : %d\nstrncmp21 result : %d\n", result, result21);
  if (result == result21) {
    puts("SUCCESS\n");
  } else {
    puts("FAIL\n");
  }
}

void run_strncmp21_test() {
  puts("STRCMP TEST");
  for (int i = 0; i < N_TESTS; ++i) {
    printf("TEST #%d\n", i);

    size_t size1 = randint(MAX_LEN);
    char str1[MAX_LEN];
    randstr(str1, size1);

    size_t size2 = randint(MAX_LEN);
    char str2[MAX_LEN];
    randstr(str2, size2);

    size_t max_size = size1;
    if (max_size < size2) {
      size2 = max_size;
    }

    int n = randint(max_size + 1);

    strncmp21_test(str1, str2, n);
  }
}

void memset21_test(char *str, size_t size, char c, int n) {
  char str_copy[MAX_LEN];

  strcpy(str_copy, str);
  memset(str_copy, c, n);

  char str_copy21[MAX_LEN];
  strcpy(str_copy21, str);
  memset21(str_copy21, c, n);

  printf("c: %c\nn: %d\nstr: %s\nstrlen: %zu\n", c, n, str, size);
  printf("memset result: %s\nmemset21 result: %s\n", str_copy, str_copy21);

  if (strcmp(str_copy, str_copy21) == 0) {
    puts("SUCCESS\n");
  } else {
    puts("FAIL\n");
  }
}

void run_memset21_test() {
  puts("MEMSET TEST");
  for (int i = 0; i < N_TESTS; ++i) {
    printf("TEST #%d\n", i);

    char c = randchr();
    char str[MAX_LEN];
    size_t size = randint(MAX_LEN);
    int n = randint(size);
    randstr(str, size);
    memset21_test(str, size, c, n);
  }
}

