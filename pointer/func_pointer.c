#include <stdio.h>

/*
函数存储在内存中也有地址，函数名存储的就是函数地址，可以将函数名理解为指针。
声明一个指针，拷贝函数名，就可以将指针作为函数使用*/

int sum(int a, int b){
    return a+b;
}

int caculate(int a, int b, int(*p)(int, int)){
    return p(a, b);
}

int main(){
    printf("%d", caculate(1, 3, sum));
}