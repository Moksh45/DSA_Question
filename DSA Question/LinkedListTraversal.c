#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
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

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fivth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 19;
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
    fivth->next = NULL;

    linkedListTraversal(head);

    return 0;
}