#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define CAP 10
typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE* createList();     //创建链表
void fInsertNode(NODE *head, int data);      //头插法
void bInsertNode(NODE *head, int data);     //尾插法
void destoryList(NODE *head);       //销毁链表
int listLength(NODE *head);     //链表长度
void printList(const NODE *p);
NODE* searchList(NODE *head, int key);  //链表查找
void deleteNode(NODE* head, NODE* find);     //删除节点
void bubbleSort(NODE* head);
void sortList(NODE* head);
void reverseList(NODE* head);


int main(){
    srand(time(0));
    NODE *head =createList();

    for(int i=0; i<CAP; i++){
        int num = rand()%10+1;
        fInsertNode(head, num);
    }

    printList(head);
    // bubbleSort(head);
    sortList(head);
    reverseList(head);
    printList(head);
    destoryList(head);
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

void destoryList(NODE *head){
    NODE *cur = head; 
    while(cur!=NULL){
        head = cur->next;
        free(cur);
        cur = head;
    }
    printf("析构完成！\n");
}

int listLength(NODE *head){
    if(!head){
        return 0;
    }
    NODE* cur = head->next;
    int count = 0;
    while(cur){
        count++;
        cur = cur->next;
    }
    printf("链表的长度为%d\n", count);
    return count;
}

NODE* searchList(NODE* head, int key){
    head = head->next;
    while(head){
        if(head->data == key){
            return head;
        }
        head = head->next;
    }
    return NULL;
}

void deleteNode(NODE* head, NODE* find){
    if(!head){
        return;
    }
    while(head->next!=find){
        head = head->next;
    }
    head->next = find->next;
    free(find);
}

void bubbleSort(NODE* head){

    if(!head){
        return;
    }
    int len = listLength(head);

    for(int i=0; i<len-1;i++){
        NODE *cur = head->next;     //每轮重置头指针
        bool swapped = false;   //bool变量需要包含头文件stdbool.h
        for(int j=0; j<len-i-1; j++){
            if(cur->data > cur->next->data){
                int temp = cur->data;   //只交换数据不交换节点
                cur->data = cur->next->data;
                cur->next->data = temp;
                swapped = true;
            }
            cur = cur->next;
        }
        if(!swapped){   //如果有一轮没有交换，说明已经有序，可以提前退出
            break;
        }
    }
}

void sortList(NODE* head){
    //交换节点的写法
    if(!head||!head->next){
        return;
    }
    int len = listLength(head);
    bool swap;
    for(int i=0; i<len-1; i++){
        swap=false;
        NODE *sh = head;    //辅助节点
        NODE *pre = head->next;
        NODE *cur = pre->next;
        for(int j=0; j<len-i-1; j++){
            if(pre->data > cur->data){
                //交换节点
                sh->next = cur;
                pre->next = cur->next;
                cur->next = pre;
                //恢复节点名称
                NODE* temp = pre;
                pre = cur;
                cur = temp;
                swap = true;
            }
            //节点后移
            sh = sh->next;
            pre = pre->next;
            cur = cur->next;
        }
        if(!swap){  //如果有一轮没有交换，则提前结束
            break;
        }

    }
}

void reverseList(NODE* head){
    if(!head|| !head->next){
        return;
    }
    NODE *pre=NULL, *cur=head->next, *next=NULL;
    while(cur){
        next = cur->next;   //保存下一节点
        cur->next = pre;    //当前节点的下一节点指向前一节点
        pre = cur;  //节点后移
        cur = next;
    }
    head->next = pre;
}