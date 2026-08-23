#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};

    struct node *InsertAtFirst(struct node *head,int data)
    {
      struct node* ptr = (struct node*)malloc(sizeof(struct node));
        ptr->next=head;
        ptr->data=data;
        return ptr;
    };

    struct node*InsertInBetween(struct node *head,int data,int index){
        struct node*ptr= (struct node*)malloc(sizeof(struct node));
        struct node *p=head;
        int i=0;
        while(i!=index-1){
            p=p->next;
            i++;
        }
        ptr->data=data;
        ptr->next=p->next;
        p->next=ptr;
        
        return head;
    }
    
void LinkedList(struct node*ptr){
    while (ptr!=NULL)
    {
       printf("%d\n",ptr->data);
       ptr=ptr->next;
    }
    
};


int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    head = (struct node*)malloc(sizeof(struct node ));
    second =(struct node*)malloc(sizeof(struct node));
    third =(struct node*)malloc(sizeof(struct node));
    fourth =(struct node*)malloc(sizeof(struct node));
    //
    head->data=34;
    head->next=second;
    //
    second->data=67;
    second->next=third;
    //
    third->data=55;
    third->next=fourth;
    //
    fourth->data=23;
    fourth->next=NULL;
    // head = InsertAtFirst(head,head->data);
    head = InsertInBetween(head,21,4);
    LinkedList(head);



    return 0;
}