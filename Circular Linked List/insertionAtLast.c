#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*next;
    int data;
};
    void display(struct node*head){
        struct node*p=head;
        do {
    printf("%d ", p->data);
    p = p->next;
} while(p != head);
printf("\n");
    }
    struct node*insertAtLast(struct node*head,int data){
        struct node*ptr=(struct node*)malloc(sizeof(struct node));
        struct node*p=head;
        ptr->data=data;
        while(p->next!=head){
            p=p->next;
        }
        p->next=ptr;
        ptr->next=head;
        return head;
    }


int main(){
    struct node*head = (struct node*)malloc(sizeof(struct node));
    struct node*second = (struct node*)malloc(sizeof(struct node));
    struct node*third = (struct node*)malloc(sizeof(struct node));
    struct node*fourth = (struct node*)malloc(sizeof(struct node));
    //linking-->
    head->data=87;
    head->next=second;

    second->data=34;
    second->next=third;
    
    third->data=45;
    third->next=fourth;
    
    fourth->data=23;
    fourth->next=head;

    printf("Before insertion : \n");
    display(head);
    head = insertAtLast(head,63);
    printf("After insertion : \n");
    display(head);

    return 0;
}