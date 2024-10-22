#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1. malloc
    作用：函数分配堆区内存
    参数：为分配内存的大小
    返回值为 void*
2. memset
    作用：内存初始化
    参数：第一个参数为需要初始化的内存的地址，第二个参数为初始化的值，第三个参数为初始化值的大小
3. free
    作用：释放分配的堆区内存
    参数：内存地址
*/

int main(){
    int *p = (int *)malloc(sizeof(int));    //分配int类型大小的内存
    memset(p, 0, sizeof(int));
    printf("*p = %i", *p);
    free(p);        //释放内存
    p=0;    //指针指向0
    return 0;
}