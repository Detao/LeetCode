#include "binarySearch.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  char *s = "abca";
  char *t = "assssbaac";

  printf("%d\r\n", isSubsequence(s, t));
  return 0;
}