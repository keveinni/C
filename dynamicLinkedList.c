#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE* createList();
void fInsertNode(NODE *head, int data);
void bInsertNode(NODE *head, int data);

void printList(const NODE *p);

int main(){
    NODE *head =createList();
    fInsertNode(head, 1);
    bInsertNode(head, 2);
    bInsertNode(head, 3);
    fInsertNode(head, 0);
    printList(head);
    return 0;
}

NODE* createList(){
    NODE *head = (NODE *)malloc(sizeof(NODE));  //分配内存
    if(head == NULL){
        printf("memory allocation failed!");
        return NULL;
    }
    head->next = NULL;  //头节点不存数据
    return head;
}



void fInsertNode(NODE *head, int data){
    NODE *cur = (NODE *)malloc(sizeof(NODE));
    if (cur==NULL){
        printf("memory allocation failed");
        return;
    }
    cur->data = data;
    cur->next = head->next;
    head->next = cur;
}

void bInsertNode(NODE *head, int data){
    NODE *pre = head;
    while(pre->next!=NULL){ //寻找尾节点
        pre = pre->next;
    }

    NODE *cur = (NODE*)malloc(sizeof(NODE));
    if(cur==NULL){
        printf("memory allocation failed!");
    }
    cur->data = data;
    pre->next = cur;
    cur->next = NULL;
}

void printList(const NODE *head){
    NODE *cur = head->next;
    while(cur!=NULL){
        printf("cur->data = %d\n", cur->data);
        cur = cur->next;
    }
}