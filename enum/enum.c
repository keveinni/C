#include <stdio.h>

enum Season {
    spring,
    summer, 
    autumn,
    winter
}s;

int main(){
    int input;
    scanf("%d", &input);
    s = (enum Season)input; //s为数值型
    printf("%u",s);
    return 0;
}

