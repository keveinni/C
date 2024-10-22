#include <stdio.h>

/*
字符串以字符数组的形式存储，末尾是‘\0’
如果以字符串形式进行复制，直接使用等号；
如果以数组形式进行复制，需要在末尾添加\0
可以使用scanf printf直接加数组名进行输入输出，%s表示以字符串形式
*/
int main(){
    char name[3] = "nwq";
    printf("%s\n", name);
    scanf("%s", name);
    printf("%s\n", name);
    return 0;
}