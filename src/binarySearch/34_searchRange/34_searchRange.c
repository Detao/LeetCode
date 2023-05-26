#include "binarySearch.h"
#include <stdint.h>

static int left_bound(int *nums, int numSize, int target) {
  int leftIndex = 0, rightIndex = numSize - 1;
  while (leftIndex <= rightIndex) {
    int mid = leftIndex + (rightIndex - leftIndex) / 2;
    if (nums[mid] > target) {
      rightIndex = mid - 1;
    } else if (nums[mid] < target) {
      leftIndex = mid + 1;
    } else {
      rightIndex = mid - 1;
    }
  }
  if (leftIndex > numSize - 1 && nums[leftIndex] != target) {
    return -1;
  }
  return leftIndex;
}
static int right_bound(int *nums, int numSize, int target) {
  int leftIndex = 0, rightIndex = numSize - 1;
  while (leftIndex <= rightIndex) {
    int mid = leftIndex + (rightIndex - leftIndex) / 2;
    if (nums[mid] > target) {
      rightIndex = mid - 1;
    } else if (nums[mid] < target) {
      leftIndex = mid + 1;
    } else {
      leftIndex = mid + 1;
    }
  }
  if (rightIndex < 0 && nums[leftIndex - 1] != target) {
    return -1;
  }
  return leftIndex - 1;
}
int *searchRange(int *nums, int numSize, int target, int *returnSize) {
  static int ret[2] = {0, 0};
  ret[0] = left_bound(nums, numSize, target);
  ret[1] = right_bound(nums, numSize, target);

  *returnSize = 2;
  return ret;
}