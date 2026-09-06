#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*prev;
    struct node*next;
};
// for forward traversal -->
    void forwardtraversal(struct node*head){
        struct node*ptr=head;
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
    // backward traversal -->
    void backwardtraversal(struct node*head){
        struct node*ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        while(ptr!=NULL){
             printf("%d ",ptr->data);
             ptr=ptr->prev;
        }
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
    printf("Forward Traversal : \n");
    forwardtraversal(head);
    printf("Backward Traversal : \n");
    backwardtraversal(head);
    return 0;
}