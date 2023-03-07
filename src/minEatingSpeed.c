#include "files.h"
#include <stdint.h>
#include <stdio.h>

#define MAX(a, b) (a) > (b) ? (a) : (b)

int f(int *piles, int pilesLength, int x)
{
    int h = 0;
    for(int i = 0; i < pilesLength; i++)
    {
        int pile = piles[i]; 
        printf(" %d ",pile);
        printf("\r\n");
        while(pile > x)
        {
            pile -= x;
            h++;
        }
        h++;
    }
    return h;
} 

int minEatingSpeed(int* piles, int pilesLength, int h)
{
    int left = 1 , right = 0;

    for(int i = 0; i < pilesLength; i++){
        right += piles[i];
    }

    while(left < right){
        int mid = left + (right -left)/2;

        if(f(piles, pilesLength, mid) <= h){

            right = mid;

        }else{

            left = mid + 1;

        }
    }

    return left;
}