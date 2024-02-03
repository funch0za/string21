#include "test.h"

int main() {
#ifdef TEST_STRNCMP
  run_strncmp21_test();
#endif

#ifdef TEST_STRTOK
  
#endif

#ifdef TEST_MEMSET
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
  for (int i = 0; i < N_TESTS; ++i) {
    size_t size1 = randint();
    char str1[MAX_LEN];
    randstr(str1, size1);

    size_t size2 = randint();
    char str2[MAX_LEN];
    randstr(str2, size2);

    int n = randint();

    strncmp21_test(str1, str2, n); 
  }
}

void strtok21_test() {}

void memset21_test(char *str, char c, int n) {
  char str_copy[MAX_LEN];
  strcpy(str_copy, str);
  memset(str_copy, c, n);

  char str_copy21[MAX_LEN];
  strcpy(str_copy21, str);
  memset21(str_copy21, c, n);

  printf("c: %c\nn: %d\nstr: %s\n", c, n, str);
  printf("memset result: %s\nmemset21 result: %s\n", str_copy, str_copy21);

  if (strcmp(str_copy, str_copy21) == 0) {
    puts("SUCCESS\n");
  } else {
    puts("FAIL\n");
  }
}

void run_memset21_test() {
  for (int i = 0; i < N_TESTS; ++i) {
    char c = randchr();
    char *str[MAX_LEN];
  } 
}

int randint() {
  return rand() % MAX_LEN;
}

char randchr() {
  return '!' + rand() % 93;
}

char *randstr(char *str, size_t n) {
  for (size_t i = 0; i < n; ++i) {
    str[i] = randchr();
  }
  str[n] = '\0';
  return str;
}