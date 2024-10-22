#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
realloc函数
作用：对分配的内存空间进行扩容或者压缩，一般进行扩容，因为压缩会导致数据丢失
参数：第一个参数为原来内存的地址，第二个参数为扩容（压缩后）内存的大小
返回值：void* 指示新分配的内存的地址
*/
int main(){
    // int *p = NULL;
    // p = realloc(p, sizeof(int));

    // if(p==NULL){
    //     printf("memory allocation failed!\n");
    //     return 1;
    // }

    // *p=6;

    // printf("p=%p \n*p=%d", (v
    int *p = (int *)malloc(sizeof(int));
    printf("%p\n", (void *)p);

    p = realloc(p, 4 * sizeof(int));
    printf("%p\n", (void *)p);
    for(int i=0;i<3;i++){
        printf("%d\n", p[i]);
    }

    free(p);
    p=0;
    return 0;
}