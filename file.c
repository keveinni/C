#include <stdio.h>
#include <stdlib.h>

/*
1.fopen
    作用：打开文件流
    参数：第一个参数文件名，第二个参数模式（r只读， w写，会覆盖原有内容， a，追加内容）
    返回值 FILE*
    
2. fclose
    作用：关闭文件流
    参数：打开的文件流
    返回值：成功返回0,失败返回eof
    
3. fputc
    作用:一次写入一个字符
    参数：第一个参数为待写入的字符，第二个参数为打开的文件流
    
    
4.  fgetc
    作用：读取一个字符
    参数：打开的文件流
    
5. feof
    作用：判断文件流是否到达结尾
    参数：打开的文件流
    注意：要先读再判断
6. fputs
    作用：写入一行
    参数：第一个参数char* str, 第二个参数 FILE *p

7. fgets
    作用：读取一行
    参数：第一个参数char *str(为读取数据的缓冲区)， 第二个参数int length(读取的长度), 第三个参数FILE *p为打开的文件流
    返回值：如果读取成功则返回str的地址，如果失败则返回NULL
    注意：如果在读取长度前遇到\n或者EOF会提前结束,并且最多读取length-1个

8. fwrite
    作用：一次读写一块数据
    参数：void* buffer待写入的文本的缓冲区， 第二个参数：每次写入的字段的长度， 第三个参数，要你写入的字段的个数， 第四个参数，打开的文件流
    返回值:int 如果成功返回写的字段数， 如果失败返回0；

9. fread
    作用：一次读取一块数据
    参数： 第一个参数为读取文本的缓冲区， 第二个参数每次读取的字段的长度， 第三个参数， 要读取的字段的个数， 第四个参数， 打开的文件流
    返回值： int 如果成功则返回读的字段数， 如果失败则返回0
    */

int main(){
    FILE *p = fopen("file.txt", "w");
    if(p==NULL){
        perror("failed to open file");
        return 1;
    }
    // 写入单个字符
//    for(char ch = 'a'; ch <= 'z'; ch++){
//         // 一次写入一个字符
//         char res = fputc(ch, p);
//         printf("res = %c\n", res);
//     } 
//     rewind(p);
//     char f = EOF;
//     while((f = fgetc(p))&&(!feof(p))){
//         printf("%c", f);
//     }

    //写入和读取字符串
    // fputs("this is a new wirte\n", p);
    // fputs("hello", p);
    // fclose(p);

    // fopen("file.txt", "r");
    // char s[50];
    // char *cp = fgets(s, 30, p);
    // while(cp){
    //     printf("%s", s);
    //     cp = fgets(s, 30, p);
    // }

    //一次写入一块数据
    char s[30];
    char start='a';
    for(int i=0; i<26; i++){
        s[i] = start++;
    }
    int ans = fwrite(s, 7, 3, p);
    if(ans==0){
        perror("failed to write the info!");
    }
    fclose(p);
    FILE *np = fopen("file.txt", "r");
    char news[30];
    ans = fread(news, 21, 1, np);
    if(ans==0){
        printf("failed to read the file");
        return 1;
    }
    printf("%s", news);
    fclose(np);
    return 0;

}