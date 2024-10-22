#include <stdio.h>

struct student {
    long no;
    char name[4];
};

int main(){
    struct student stu[2]={{2019, "nwq"}, {2020, "ksy"}};
    

}
/*结构体从大到小分配内存，对成员进行从小到大分配内存，结构体占用的内存为最大成员的倍数*/