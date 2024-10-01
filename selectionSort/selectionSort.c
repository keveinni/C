#include <stdio.h> 
#include <stdlib.h>
#include "../TEST/test.h"
#include <time.h>
void selectionSort(int numSize, int* nums);

int main(){
    srand(time(NULL));
    int numSize=0;
    int nums[50];
    readTestCases(&numSize, nums);

    selectionSort(numSize, nums);
    printResults(numSize, nums);
}

void selectionSort(int numSize, int* nums){ 
    int temp=0;
    for(int i=0; i<numSize-1; i++){
        for(int j=i+1; j<numSize; j++){
            if(nums[i]>nums[j]){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
             }
        }
    }
}
