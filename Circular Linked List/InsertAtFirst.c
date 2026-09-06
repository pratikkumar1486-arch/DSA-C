#include<stdio.h>
#include<stdlib.h>
 struct Node{
        int data;
        struct Node *next;
    };

   void display(struct Node*head){
        struct Node *ptr=head;
        do{
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }while(ptr!=head);
   }
   struct Node*InsertAtFirst(struct Node* head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head->next;
    ptr->data=data;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head =ptr;
    return head;
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
    printf("Circular linked list before insertion : \n");
    display(head);
    printf("circular linked list after insertion.\n");
    head =InsertAtFirst(head,23);
    display(head);
    return 0;
}