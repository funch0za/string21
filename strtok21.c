#include "string21.h"
#include <string.h>

char *strtok21(char *str, const char *delim) {
  static char *buffer;
  static int index;
  char *token;
  
  if (str != NULL) {
    buffer = malloc(sizeof(char) * strlen(str));
    strcpy(buffer, str);
    index = 0;
  }

  if (strlen(buffer) == 0) {
    token = NULL;
  } else {
    token = malloc(sizeof(char) * strlen(buffer));
    strcpy(token, buffer);
    bool find = false;
    for (int i = 0; buffer[i] != '\0' && !find; ++i) {
      for (int j = 0; delim[j] != '\0' && !find; ++j) {
        if (buffer[i] == delim[j]) {
          token[i] = '\0';
          index = i;
          buffer += i + 1;
          find = true;
        }
      }
    }

    if (!find) {
      buffer[0] = '\0';
    }
  }

  return token;
}