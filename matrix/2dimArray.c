#include <stdio.h>

/*二维数组
1. 可以连续视作一个一位数组，每个元素存储了一个1dim数组
2. 初始化可以定义同时初始化或者先定义再初始化
    写法：
    int a[2][3]={ {80,75,92}, {61,65,71}};
    int a[2][3]={ 80,75,92,61,65,71};
    完全初始化或者部分初始化可以省略第一维的长度，但不能省略第二位的长度
3. 指定元素的初始化int a[2][3]={[1][2]=10};int a[2][3]={[1]={1,2,3}}
4. 二维数组不能在被调函数内获取其行数，但可以获取其列数
5. c不支持重载
*/

//值传递
void changeChar(char ch){
    ch='n';
}

void changeCharArray(char ch[]){
    ch[0] = 'e';
}

void change(char ch[][3]){
    ch[0][0]='p';
}

char cs[2][3] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'}
    };

int main(){
    printf("cs[0][0] = %c\n", cs[0][0]); // a
    changeChar(cs[0][0]);
    printf("cs[0][0] = %c\n", cs[0][0]); // a

    printf("cs[0][0] = %c\n", cs[0][0]); // a
    changeCharArray(cs[0]);
    printf("cs[0][0] = %c\n", cs[0][0]); // n
    
    printf("cs[0][0] = %c\n", cs[0][0]); // a
    change(cs);
    printf("cs[0][0] = %c\n", cs[0][0]); // n
    
    return 0;

}