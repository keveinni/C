#include <stdio.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

int main(){
    NODE a, b, c;
    a.data = 0;
    b.data = 1;
    c.data = 2;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    NODE *head = &a;

    while(head!=NULL){
        int currentData = head->data;
        printf("currentData = %d\n", currentData);
        head = head->next;
    }
    return 0;
}