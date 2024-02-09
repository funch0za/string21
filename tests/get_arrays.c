#include "test_string21.h"

void get_strs(char str[N][MAX_LEN]) {
  const char STRS[N][MAX_LEN] = {
      "ER",         "hTX",    "qWqtQQc", "-fGq@n6uX", "vjlbPei%Nd",
      "-I(ix7C#jw", "FfVa",   "rgTo",    "hZSHK7",    "7b",
      "OD6tr3Pwck", "wRAj",   "ep9(o",   "Sm7B",      "oDB3Py",
      "9Dv@Tr",     "it3VA&", "A",       "T7",        "Z"};

  for (int i = 0; i < N; ++i) {
    strcpy(str[i], STRS[i]);
  }
}

void get_delims(char delim[N][MAX_LEN]) {
  const char DELIMS[N][MAX_LEN] = {"REERE", "hXXTh", "WQWQt", "un6Gq", "Ne%NP",
                                   "i-(C-", "aVafF", "oTrrT", "SHKh7", "7bbbb",
                                   "DPOr6", "jRAAA", "9p9oe", "7SSBm", "DyyoP",
                                   "vTT9v", "Ai3iA", "AAAAA", "TTT77", "ZZZZZ"};

  for (int i = 0; i < N; ++i) {
    strcpy(delim[i], DELIMS[i]);
  }
}

void get_nums(int n[N]) {
  const int NUMS[N] = {1, 3, 1, 6, 3, 2, 5, 4, 2, 3,
                       1, 1, 2, 1, 4, 3, 7, 2, 3, 1};

  for (int i = 0; i < N; ++i) {
    n[i] = NUMS[i];
  }
}

void get_chrs(char chrs[N]) {
  const char CHRS[N] = "AXDH-DiWxlOendnpw)K@";
  strcpy(chrs, CHRS);
}
