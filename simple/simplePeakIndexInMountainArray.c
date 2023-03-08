#include "files.h"
#include <stdio.h>

int main(int argc ,char* argv[])
{
    printf("simplePeakIndexInMountainArray\r\n");
    int arr[] = {0,1,0};
    int arr1[] = {0,2,1,0};
    int arr2[] = {0,10,5,2};
    int arr3[] = {3,4,5,1};
    int arr4[] = {24,69,100,99,79,78,67,36,26,19};
    int arr5[] = {40,48,61,75,100,99,98,39,30,10};

    int mountainIndex = peakIndexInMountainArray(arr,3);
    int mountainIndex1 = peakIndexInMountainArray(arr1,4);
    int mountainIndex2 = peakIndexInMountainArray(arr2,4);
    int mountainIndex3 = peakIndexInMountainArray(arr3,4);
    int mountainIndex4 = peakIndexInMountainArray(arr4,10);
    int mountainIndex5 = peakIndexInMountainArray(arr5,10);

    printf("mountainIndex:%d\r\n",mountainIndex);
    printf("mountainIndex:%d\r\n",mountainIndex1);
    printf("mountainIndex:%d\r\n",mountainIndex2);
    printf("mountainIndex:%d\r\n",mountainIndex3);
    printf("mountainIndex:%d\r\n",mountainIndex4);
    printf("mountainIndex:%d\r\n",mountainIndex5);
}