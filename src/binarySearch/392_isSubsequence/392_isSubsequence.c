#include "binarySearch.h"
#include <string.h>

bool isSubsequence(char *s, char *t) {
  while (*t) {
    if (*t == *s) {
      s++;
    }
    t++;
  }
  if (!*s) {
    return true;
  }
  return false;
}