#include "binarySearch.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("simplePreimageSizeFZF\r\n");
  for (int i = 0; i < 20; i++) {
    int ret = preimageSizeFZF(i);
    printf("k=%d count=%d\r\n", i, ret);
  }

  return 0;
}