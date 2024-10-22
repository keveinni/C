#include <stdio.h>

/*
&进行指针声明
使用p->member访问成员
*/
struct student {
    long no;
    char name[4];
};

int main(){
    struct student stu[2]={{2019, "nwq"}, {2020, "ksy"}};
    struct student *p0 = &stu[0];

    printf("%ld%s", (*p0).no, (*p0).name);
    printf("%ld%s", p0->no, p0->name);
    return 0;
}