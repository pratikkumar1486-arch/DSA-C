#include<stdio.h>
#include<stdlib.h>
    struct Node{
        int data;
        struct Node *next;
    };
    void Linkedlist(struct Node*ptr){
        while(ptr!=NULL){
            printf("Element : %d\n",ptr->data);
            ptr = ptr->next;
        }
    }

int main(){
    struct Node *head;
    struct Node*second;
    struct Node*third;
    //
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    // link first with second
    head->data=7;
    head->next=second;
    // link second with third
    second->data=98 ;
    second->next=third;
    // link third with NULL
    third->data=71;
    third->next=NULL;
    Linkedlist(head);
    return 0;
}