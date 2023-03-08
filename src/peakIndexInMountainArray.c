#include "files.h"

#include <stdio.h>
#include <stdint.h>

int peakIndexInMountainArray(int* arr, int arr_size)
{
    int left = 0, right = arr_size;

    while(left < right-1)
    {
        int mid = left + (right -left)/2;

        if(arr[mid] >= arr[mid-1])
        {
            left = mid;
        }else{
            right = mid - 1;
        }
    }
    if(arr[right] >= arr[left])
    {
        left = right;
    }
    return left ;
}