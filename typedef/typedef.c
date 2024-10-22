#ifndef TYPEDEF
#define TYPEDEF

#include <stdio.h>
/*
typedef关键字用来给数据类型声明一个别名
1. 基本数据类型
2. 数组
3. 结构体
4. 枚举
5. 指针
6. 指向函数的指针*/

// struct person{
//     char name[10];
//     int age;
// };

int sum(int a, int b){
        return a+b;
    }

int main(){
    typedef int INT;
    INT a=1;
    printf("%d\n", a);

    typedef char NAME[10];
    NAME b="NWQ";
    printf("%s\n", b);

    // typedef struct person PERSONTYPE;
    // PERSONTYPE c = {"nwq", 19};
    // printf("%s %d", c.name, c.age);

    typedef struct person{
        int age;
        char name[10];
    } PERSONTYPE;
    PERSONTYPE d = {12, "nwq"};
    printf("%s %d\n", d.name, d.age);

    typedef enum sex{
        sexMan,
        sexWoman,
        sexUnknow
    } SEXTYPE;
    SEXTYPE e=0;
    printf("%d\n", e);

   
    typedef int (*mySum)(int, int);
    mySum p = sum;
    printf("%d\n", p(1, 2));
}

#endif