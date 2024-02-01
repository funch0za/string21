#include "test.h"

int main() {
  const char str1[N_TESTS][MAX_LEN] = {"abcd", "abcd000000", "hello", "9997"};
  const char str2[N_TESTS][MAX_LEN] = {"abc3", "abcc0000", "hello", "9998"};
  const int n[N_TESTS] = {2, 4, 100, 4};
  const char c[N_TESTS] = "mskp";

#ifdef TEST_STRNCMP
  strncmp21_test(str1, str2, n);
#endif

#ifdef TEST_STRTOK
  strtok21_test();
#endif

#ifdef TEST_MEMSET
  memset21_test();
#endif

  return 0;
}

void strncmp21_test(const char str1[N_TESTS][MAX_LEN],
                    const char str2[N_TESTS][MAX_LEN], const int n[N_TESTS]) {
  for (int i = 0; i < N_TESTS; ++i) {
    int result, result21;
    result = strncmp(str1[i], str2[i], n[i]);
    result21 = strncmp21(str1[i], str2[i], n[i]);
    printf("strncmp result : %d\nstrncmp21 result : %d\n", result, result21);
    if (result == result21) {
      puts("SUCCESS\n");
    } else {
      puts("FAIL\n");
    }
  }
}

void strtok21_test() {}

void memset21_test(const char str1[N_TESTS][MAX_LEN], const char c[N_TESTS], const int n[N_TESTS]) {
    
}