#include <stdio.h>
#include <stdlib.h>
#include "test.h"
void readTestCases(int* numSize, int* nums){
    *numSize = rand()%50;
    for(int i=0; i<*numSize; i++){
        nums[i]=rand()%100;
    }
}

void printResults(int numSize, int* nums){
    for(int i=0; i<numSize; i++){
        printf("nums[%d]=%d\n", i, nums[i]);
    }
}

