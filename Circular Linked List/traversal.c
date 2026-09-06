#include<stdio.h>
#include<stdlib.h>
 struct Node{
        int data;
        struct Node *next;
    };

   void traversal(struct Node*head){
        struct Node *ptr=head;
        do{
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }while(ptr!=head);
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
    second->data=9 ;
    second->next=third;
    // link third with NULL
    third->data=1;
    third->next=head;
    traversal(head);
    return 0;
}