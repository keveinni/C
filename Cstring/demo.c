#include <stdio.h>
#include <string.h>

void char_contains(char str[], char key){
    size_t len = strlen(str);
    for(int i=0; i<len; i++){
        if (!strcmp(&str[i], &key)){
            printf("contains!");
            return;
        }
    } 
    printf("not contains!");
}

int main(){
    char str[20] = "sdfhalksdgalsdkg";
    char key = 'q';
    char_contains(str, key);
    return 0;
}