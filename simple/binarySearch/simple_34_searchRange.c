#include "binarySearch.h"
#include <stdio.h>
int main(int argc, char *argv[]) {
  printf("simple searchRange\r\n");

  int retSize = 0;
  int num[10] = {1, 2, 3, 4, 5, 8, 8, 8, 8, 8};
  int *ret;
  ret = searchRange(num, 10, 8, &retSize);
  printf("retSize:%d  ret[%d %d]\r\n", retSize, ret[0], ret[1]);
  return 0;
}