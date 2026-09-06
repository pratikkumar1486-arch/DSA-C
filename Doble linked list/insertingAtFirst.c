#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*prev;
    struct node*next;
};
    void display(struct node*head){
        struct node*ptr=head;
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
            printf("\n");
    }
    struct node*insert(struct node*head,int data){
        struct node*ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->prev=NULL;
        ptr->next=head;
        if(head!=NULL){
            head->prev=ptr;
        }
        head=ptr;
        return head;
    }

int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));
    struct node*third=(struct node*)malloc(sizeof(struct node));
    //linking ->
    head->prev=NULL;
    head->data=21;
    head->next=second;
    second->prev=head;
    second->data=12;
    second->next=third;
    third->prev=second;
    third->data=34;
    third->next=NULL;
    printf("before insertion : \n");
    display(head);
    printf("after insertion : \n");
    head = insert(head,65);
    display(head);
    return 0;
}