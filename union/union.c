#include <stdio.h>
/*结构体所有成员共用同一地址，只有一个成员生效*/
struct stu{
    int stu_no;
    char name[10];
    double score;
};

struct tch{
    int tch_no;
    char name[10];
    double income;
};

union information{
    struct stu stuSwap;
    struct tch tchSwap;
} swap;

int main(){
    int type;
    while(1){
        scanf("%d", &type);
        if (type==1){
            scanf("%d%s%lf", &swap.tchSwap.tch_no, swap.tchSwap.name, &swap.tchSwap.income);
        }else{
            scanf("%d%s%lf", &swap.stuSwap.stu_no, swap.stuSwap.name, &swap.stuSwap.score);
        }
        
    }
}


