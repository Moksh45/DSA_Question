#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *previous;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr=head;
    struct Node *p;
    printf("\nTraversal in forward direction \n"); 
    while (ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        p=ptr;
        ptr=ptr->next;
    }
   
    printf("\nTraversal in reverse direction \n");
    while (p!=NULL)
    {
        printf("Element : %d\n",p->data);
        p=p->previous;
    }
}
// case 1
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next=head;
    ptr->previous=NULL;
    head->previous=ptr;
    

    return ptr;
}

// case 2
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    ptr->previous=p;
    p->next = ptr;


    return head;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    struct Node *p = head->next;

    while (p->next != head)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = head;
    return head;
}

// case 4
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    ptr->data = data;

    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fivth;
    struct Node *sixth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fivth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = second;
    head->previous=NULL;

    // Link second and third nodes
    second->data = 123;
    second->next = third;
    second->previous=head;

    // Link third and fourth nodes
    third->data = 532;
    third->next = fourth;
    third->previous=second;

    // Link fourth and Fivth nodes
    fourth->data = 34;
    fourth->next = fivth;
    fourth->previous=third;

    // Terminate the list at the fivth node
    fivth->data = 59;
    fivth->next = sixth;
    fivth->previous=fourth;

    sixth->data = 1275;
    sixth->next = NULL;
    sixth->previous=fivth;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    //head = insertAtFirst(head, 100);
    head = insertAtIndex(head, 100, 1);
    //head = insertAtEnd(head, 100);
    // head = insertAfterNode(head, third, 100);
    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);
    return 0;
}