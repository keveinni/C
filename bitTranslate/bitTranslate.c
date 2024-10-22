#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void total(int num, int base){
    char cs[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    char rs[32] = {0}; // 初始化数组}
    int pos = sizeof(rs) / sizeof(char);

    printf("after=");

    if(num == 0){
        printf("0\n");
    }
    while(num!=0){
        int index = num & (base - 1); //按位与操作获取当前位（最后一位）
        rs[--pos] = cs[index];
        num >>= (base == 2 ? 1:(base == 8 ? 3:4)); //移位运算
    }

    for(int i=pos; i<32; i++){
        printf("%c", rs[i]);
    }
    printf("\n");
}

void toBinary(int num){
    printf("before=%d\n", num);
    total(num, 2);
}

void toOct(int num){
    printf("before=%d\n", num);
    total(num, 8);
}

void toHex(int num){
    printf("before=%d\n", num);
    total(num, 16);
}

int main(){
    srand(time(NULL));
    for(int i=0; i<10; i++){
        usleep(1000);
        int num = rand();
        toBinary(num);
        toOct(num);
        toHex(num);
    }
    return 0;
}
