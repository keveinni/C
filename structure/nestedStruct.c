#include <stdio.h>

struct Date{
    int month;
    int day;
    int year;
};

struct stu
{
    int no;
    char name[10];
    struct Date birthday;
};

int main(){
    struct stu stu1 = {1, "nwq", {12, 13, 1999}}; 
    struct stu *p = &stu1;
    printf("%d %s %d %d %d", p->no, (p->name), (p->birthday).month, (p->birthday).day, (p->birthday).year);
    return 0;
}
/*结构体作为形参是值传递，赋是拷贝而不是引用，改变不会影响原来的值*/