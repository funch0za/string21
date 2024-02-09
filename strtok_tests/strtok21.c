#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 20
#define N_TESTS 10

char *strtok21(char str[], const char delim[]) {
  static char *buffer;
  static char shift; // сдвигаем строку на длину токена

  if (str != NULL) {
    buffer = str;
    shift = 0;

    // начинается ли строка с делиметора

    bool stop = false;
    for (size_t i = 0; buffer[i] != '\0' && !stop; ++i) {
      bool is_delim = false;
      for (size_t j = 0; delim[j] != '\0'; ++j) {
        if (buffer[i] == delim[j]) {
          is_delim = true;
        }
      }

      if (is_delim) {
        ++shift;
      } else {
        stop = true;
      }
    }
  }

  buffer += shift;

  if (*buffer == '\0') {
    buffer = NULL;
  } else {
    bool found = false;

    int d_count = 0;
    for (size_t i = 0; buffer[i] != '\0' && !found; ++i) {
      bool is_delim = false;
      for (size_t j = 0; delim[j] != '\0'; ++j) {
        if (buffer[i] == delim[j]) {
          is_delim = true;
        }
      }

      if (is_delim) {
        ++d_count;
      } else if (d_count != 0) {
        found = true;
        shift = i;
        buffer[i - d_count] = '\0';
      }
    }

    if (!found) {
      shift = strlen(buffer); // дошли до конца строки, свдигаем на '\0'
    }
  }

  return buffer;
}

int main() {
  char str[MAX_LEN], delim[MAX_LEN / 2];

  fgets(str, MAX_LEN, stdin);
  fgets(delim, MAX_LEN / 2, stdin);
  
  char *token = strtok21(str, delim);
  while (token != NULL) {
    puts(token);
    token = strtok21(NULL, delim);
  }
}