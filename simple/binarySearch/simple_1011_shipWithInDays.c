#include "binarySearch.h"
#include <stdint.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("shipwithindays\r\n");
  int cap = 0;
  int weights[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int days = 5;
  cap = shipWithInDays(weights, 10, days);
  printf("cap :%d\r\n", cap);
  return 0;
}