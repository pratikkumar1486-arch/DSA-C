#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Display
void display(struct Node *head)
{
    struct Node *p = head;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != head);

    printf("\n");
}

// Delete first node
struct Node* deleteFirst(struct Node *head)
{
    struct Node *p;
    struct Node *q;

    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }

    // Only one node
    if (head->next == head)
    {
        free(head);
        return NULL;
    }

    p = head;

    // Find last node
    q = head;

    while (q->next != head)
    {
        q = q->next;
    }

    // Move head
    head = head->next;

    // Last node points to new head
    q->next = head;

    free(p);

    return head;
}

// Delete last node
struct Node* deleteLast(struct Node *head)
{
    struct Node *p;
    struct Node *q;

    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }

    // Only one node
    if (head->next == head)
    {
        free(head);
        return NULL;
    }

    p = head;

    // Find second-last node
    while (p->next->next != head)
    {
        p = p->next;
    }

    q = p->next;

    // Second-last points to head
    p->next = head;

    free(q);

    return head;
}

// Delete node at a given position
struct Node* deleteAtPosition(struct Node *head, int position)
{
    struct Node *p;
    struct Node *q;
    int i;

    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }

    if (position <= 0)
    {
        printf("Invalid position\n");
        return head;
    }

    // Position 1
    if (position == 1)
    {
        return deleteFirst(head);
    }

    p = head;

    for (i = 1; i < position - 1; i++)
    {
        p = p->next;

        if (p == head)
        {
            printf("Invalid position\n");
            return head;
        }
    }

    q = p->next;

    // Position doesn't exist
    if (q == head)
    {
        printf("Invalid position\n");
        return head;
    }

    p->next = q->next;

    free(q);

    return head;
}

// Delete node by value
struct Node* deleteByValue(struct Node *head, int value)
{
    struct Node *p;
    struct Node *q;

    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }

    // Value is in first node
    if (head->data == value)
    {
        return deleteFirst(head);
    }

    p = head;

    while (p->next != head)
    {
        if (p->next->data == value)
        {
            q = p->next;

            p->next = q->next;

            free(q);

            return head;
        }

        p = p->next;
    }

    printf("Value not found\n");

    return head;
}

// Delete entire list
struct Node* deleteEntireList(struct Node *head)
{
    struct Node *p;
    struct Node *q;

    if (head == NULL)
    {
        printf("List is already empty\n");
        return NULL;
    }

    p = head->next;

    while (p != head)
    {
        q = p;
        p = p->next;
        free(q);
    }

    free(head);

    return NULL;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Creating nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    // Assigning data
    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    // Creating circular links
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;

    printf("Original list: ");
    display(head);

    // 1. Delete first
    head = deleteFirst(head);

    printf("After deleting first: ");
    display(head);

    // 2. Delete last
    head = deleteLast(head);

    printf("After deleting last: ");
    display(head);

    // 3. Delete at position
    head = deleteAtPosition(head, 2);

    printf("After deleting position 2: ");
    display(head);

    // 4. Delete by value
    head = deleteByValue(head, 20);

    printf("After deleting value 20: ");
    display(head);

    // 5. Delete entire list
    head = deleteEntireList(head);

    printf("After deleting entire list: ");
    display(head);

    return 0;
}