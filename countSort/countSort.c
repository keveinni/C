#include <stdio.h>
#include <stdlib.h>

int* countSort(int maxNum, int* nums, int numSize);

int main(){
    int numSize = 0;
    scanf("%d", &numSize);
    
    int nums[numSize];
    int maxNum = 0;

    for(int i=0; i<numSize; i++){
        scanf("%d", &nums[i]);
        maxNum = maxNum > nums[i]?maxNum:nums[i];
    }
    int* sortedNums = countSort(maxNum, nums, numSize);
    free(sortedNums);
    return 0;
}

int* countSort(int maxNum, int* nums, int numSize){

    int* newNums = (int*)calloc(maxNum + 1, sizeof(int));   //分配内存并初始化为0
    for(int i=0; i<numSize; i++){
        newNums[nums[i]]++;
    }

    int* sortedArray = (int*)malloc(numSize * sizeof(int));
    int index=0;

    for(int i=0; i<=maxNum; i++){
        while(newNums[i]){
            printf("%d", i);
            sortedArray[index++] = i;
            newNums[i]--;
        
        }
    }
    free(newNums);
    return sortedArray;
}
