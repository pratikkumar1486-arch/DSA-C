#include<stdio.h>
#include<stdlib.h>
    struct node{
        int data;
        struct node*next;
    };
    void LinkeList(struct node*ptr,int data){
        while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr= ptr->next;
        }
    }

    struct node*InsertionAtEnd(struct node*head,int data){
        struct node* ptr = (struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        struct node*p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=ptr;
        ptr->next=NULL;
        return head;
    }

int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    //
    head   =(struct node *)malloc(sizeof(struct node));
    second =(struct node*)malloc(sizeof(struct node));
    third  =(struct node *)malloc(sizeof(struct node));
    fourth =(struct node *)malloc(sizeof(struct node));
    // Linking -->
    head->data=23;
    head->next=second;
    //
    second->data=34;
    second->next=third;
    //
    third->data=45;
    third->next=fourth;
    //
    fourth->data=90;
    fourth->next=NULL;
    //
    InsertionAtEnd(head,21);
    LinkeList(head,head->data);
    

    return 0;
}