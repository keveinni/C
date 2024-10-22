#include <stdio.h>

int main(){
    char name[] = "hello";
    char *p = name; //数组名等同于一级指针
    char **pp = &p; //二级指针存储一级指针地址
    printf("%s\n",p); // 字符串格式输出，只需要填入一级指针的值（首地址）
    printf("%s", *pp);
    return 0;
}