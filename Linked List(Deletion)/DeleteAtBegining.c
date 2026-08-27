#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*next;
    int data;
};
    void display(struct node*ptr){
        while(ptr!=NULL){
            printf("Elements are : %d\n",ptr->data);
            ptr=ptr->next;
        }
    }

    struct node*delete(struct node*head){
        struct node*p=head;
        head=head->next;
        free(p);
        return head;
    }
int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    head= (struct node*)malloc(sizeof(struct node));
    second= (struct node*)malloc(sizeof(struct node));
    third= (struct node*)malloc(sizeof(struct node));
    fourth= (struct node*)malloc(sizeof(struct node));
    head->data=21;
    head->next=second;

    second->data=1;
    second->next=third;

    third->data=2;
    third->next=fourth;

    fourth->data=210;
    fourth->next=NULL;
    head = delete(head);
    display(head);


    return 0;
}