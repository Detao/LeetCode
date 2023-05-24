
#include "binarySearch.h"
#include <stdint.h>
#include <stdio.h>
#define MAX(a, b) (a) > (b) ? (a) : (b)

/**/
static int f(int weights[], int weightsLenght, int x) {
  int days = 0;

  for (int i = 0; i < weightsLenght;) {
    int capTotal = x;
    while (i < weightsLenght) {
      if (capTotal >= weights[i]) {
        capTotal -= weights[i];
        i++;
      } else {
        break;
      }
    }
    printf("%d ", i);
    days++;
  }
  printf("days:%d\r\n", days);
  return days;
}

/**/
int shipWithInDays(int weights[], int weightsLength, int days) {
  int left = 0, right = 0;

  for (int i = 0; i < weightsLength; i++) {
    left = MAX(weights[i], left);
    right = right + weights[i];
  }
  printf("left:%d,right:%d\r\n", left, right);
  while (left < right) {
    int mid = left + (right - left) / 2;
    printf("mid:%d\r\n", mid);
    if (f(weights, weightsLength, mid) <= days) {

      right = mid;

    } else {

      left = mid + 1;
    }
  }

  return left;
}