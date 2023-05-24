#include "binarySearch.h"
#include <limits.h>

/* 计算n的阶乘的结果值后边0的个数 */
long trailingZeroes(long n) {
  long res = 0;
  for (long d = n; d / 5 > 0; d = d / 5) {
    res += d / 5;
  }
  return res;
}
/*搜索左边界*/
long left_bound(long target) {
  long min = 0, max = LONG_MAX;
  while (min < max) {
    long mid = min + (max - min) / 2;
    if (trailingZeroes(mid) > target) {
      max = mid;
    } else if (trailingZeroes(mid) < target) {
      min = mid + 1;
    } else {
      max = mid;
    }
  }
  return min;
}
/*搜索右边界*/
long right_bound(long target) {
  long min = 0, max = LONG_MAX;
  while (min < max) {
    long mid = min + (max - min) / 2;
    if (trailingZeroes(mid) > target) {
      max = mid;
    } else if (trailingZeroes(mid) < target) {
      min = mid + 1;
    } else {
      min = mid + 1;
    }
  }
  return min - 1;
}
#include <stdio.h>
/*阶乘结果值满足k个0的个数*/
int preimageSizeFZF(int k) {
  long left = left_bound(k);
  long right = right_bound(k);
  printf("[%ld-%ld]", left, right);
  return right - left + 1;
}
