#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 20
#define N_TESTS 10

int main() {
  char str[MAX_LEN], delim[MAX_LEN / 2];

  fgets(str, MAX_LEN, stdin);
  fgets(delim, MAX_LEN / 2, stdin);

  // puts(str);
  // puts(delim);  

  char *token = strtok(str, delim);
  while (token != NULL) {
    puts(token);
    token = strtok(NULL, delim);
  }
}