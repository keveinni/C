#include <stdlib.h>
#include <stdio.h>
/*
calloc函数
作用：申请多个目标类型大小的内存空间,并将内存清0
参数：第一个参数为所需的内存空间个数，第二个为所需的目标类型大小
返回值:void *
*/

int main(){
    int n = 3;
    // int *p = (int *)malloc(n * sizeof(int));
    
    int *p = calloc(n, sizeof(int));


    for(int i=0; i<n; i++){
        // p[i] = i;
        printf("p[%i] = %i\n", i, p[i]);
    }


    free(p);
    p=0;
    return 0;
}