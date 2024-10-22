#include <stdio.h>

struct product{
    int no;
    char type[10];
    double count;
};

int main(){
    // scanf("%d %9s %lf", &milk.no, milk.type, &milk.count);
    
    struct product milk2 = {2, "food", 24.2};
    printf("%d %s %f",milk2.no, milk2.type, milk2.count);

    return 0;
    
}