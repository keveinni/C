#include <stdio.h>
#include <string.h>
/*
1. 输出
puts(字符串名) //不能进行格式定义

2. 输入
gets(字符串名)  //以回车作为结尾

3. 获取字符串长度
    sizeof(字符串名)
    size_t length = strlen(字符串名)

4. 拼接
strcat(str1, str2)  //把str2拼接到str1的后边，返回str1的首地址, 要求str1足够长

5. 复制
strcpy(str1, str2) // 将str2的值复制给str1，要求str1足够长

6. 比较
strcmp(str1, str2) //比较ascii码值并返回比较结果
*/

int main(){
    char str1[20] = "hello ";
    char str2[10];
    scanf("%s", str2);
    strcat(str1, str2);
    puts(str1);
    strcpy(str1, str2);
    puts(str1);
    printf("%d", strcmp(str1, str2)); 
    return 0;
}