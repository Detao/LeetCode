#include "files.h"
#include <stdio.h>

int main(int argc, int* argv[])
{
    printf("simpleMinEatingSpeed \r\n");
    int simple[] = {3, 6, 7, 11};
    int h = 8;
    int speed= minEatingSpeed(simple, 4, h);
    printf("speed:%d\r\n",speed);
    return 0;
}