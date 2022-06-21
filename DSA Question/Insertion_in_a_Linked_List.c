#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    //ptr = (struct Node *)malloc(sizeof(struct Node));
    while (ptr->next != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
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

    // Link second and third nodes
    second->data = 123;
    second->next = third;

    // Link third and fourth nodes
    third->data = 532;
    third->next = fourth;

    // Link fourth and Fivth nodes
    fourth->data = 34;
    fourth->next = fivth;

    // Terminate the list at the fivth node
    fivth->data = 59;
    fivth->next = sixth;

    sixth->data = 1275;
    sixth->next = NULL;

    linkedListTraversal(head);

    return 0;
}